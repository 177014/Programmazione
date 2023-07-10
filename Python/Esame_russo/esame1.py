#Esame di Zhou WenXiang
import csv

class ExamException(Exception):
    pass

class CSVFile:
    def __init__(self, name):
        self.name = name

    def get_data(self):
        pass

class CSVTimeSeriesFile(CSVFile):
    def get_data(self):
        try:
            with open(self.name, 'r') as csvfile:
                my_file = csv.reader(csvfile)
                next(my_file)  # Salta la prima riga (intestazione)
                time_series = []
                for row in my_file:
                    if len(row) < 2:  # Controllo se la riga ha almeno 2 valori
                        continue
                    date, passengers = row
                    if not date or not passengers:
                        continue
                    try:
                        if int(passengers) <= 0:
                            continue
                        time_series.append([str(date), int(passengers)])  # Aggiunge i dati alla lista time_series
                    except ValueError:
                        continue

                year0_month1 = []
                for i in range(len(time_series) - 1):
                    elements = time_series[i][0].split('-')
                    if elements[0] != 'date':  # Ignora la riga con l'intestazione
                        year0_month1.append(elements)  # Aggiunge gli elementi (anno e mese) alla lista year0_month1

                for i in range(len(year0_month1) - 1):
                    if year0_month1[i + 1][0] < year0_month1[i][0]:  # Verifica se gli anni non sono in ordine
                        raise ExamException("Gli anni del file csv non sono in ordine")

                    if int(year0_month1[i][1]) > 12:  # Verifica se il mese supera 12
                        raise ExamException("Non esiste un tredicesimo mese")

                    for j in range(1, len(year0_month1) - 1 - i):
                        if time_series[i][0] == time_series[i + j][0]:  # Verifica se ci sono timestamp duplicati
                            raise ExamException("Ci sono dei timestamp duplicati")

                return time_series  # Restituisce i dati di serie temporali

        except FileNotFoundError:
            raise ExamException("File non trovato")

def compute_avg_monthly_difference(time_series, first_year, last_year):
    if not time_series:
        raise ExamException("time_series vuota")

    try:
        first_year = int(first_year)
        last_year = int(last_year)
    except ValueError:
        raise ExamException("Gli anni inseriti non sono numerici interi")

    if first_year > last_year:
        raise ExamException("Il primo anno deve essere minore dell'ultimo")

    monthly_diffs = [[] for _ in range(12)]  # Crea una lista di 12 liste vuote per rappresentare i 12 mesi

    for i in range(len(time_series) - 12):
        date = time_series[i][0]
        year, month = [int(line) for line in date.split('-')]
        try:
            if first_year <= year < last_year:
                diff = abs(time_series[i + 12][1] - time_series[i][1])  # Calcola la differenza tra i valori dei mesi consecutivi
                monthly_diffs[month - 1].append(diff)  # Aggiunge la differenza nella lista corrispondente al mese
        except IndexError:
            raise ExamException("L'intervallo di anni inseriti non è presente nel dataset")

    result = []
    for diffs in monthly_diffs:
        if diffs:
            avg = sum(diffs) / len(diffs)  # Calcola la media delle differenze per ogni mese
        else:
            avg = 0
        result.append(avg)  # Aggiunge il valore medio nella lista risultato

    return result

# Esempio di utilizzo delle classi e delle funzioni definite sopra

time_series_file = CSVTimeSeriesFile(name='C:\\Users\\PC\\OneDrive\\Programmazione\\Esame_russo\\data.csv')
time_series = time_series_file.get_data()
result = compute_avg_monthly_difference(time_series, "1949", "1951")
print(result)
