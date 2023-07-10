#Esame di Zhou Wenxiang.
import csv

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
                next(my_file)
                time_series = []
                for row in my_file:
                    date, passengers = row
                    try:
                        if int(passengers) <= 0:                                              
                            continue
                        time_series.append([str(date), int(passengers)])
                    except ValueError:                                                          
                        continue

                year0_month1 = []                                                               
                for i in range(len(time_series)-1):
                    elements = time_series[i][0].split('-')                                                    
                    if elements[0] != 'date':                                                  
                        year0_month1.append(elements)

                for i in range(0,len(year0_month1) - 1):                                        
                    if year0_month1[i+1][0] < year0_month1[i][0]:
                        raise ExamException("Gli anni del file csv non sono in ordine")
                    
                    if int(year0_month1[i][1]) > 12:                                           
                        raise ExamException("Non esiste un tredicesimo mese")
                    
                    for j in range(1,len(year0_month1) - 1 - i):                                
                        if time_series[i][0] == time_series[i+j][0]:
                            raise ExamException("Ci sono dei timestamp duplicati")

                #print(time_series)
        except FileNotFoundError:                                                               
            raise ExamException("File non trovato")

        return time_series

class ExamException(Exception):
    pass

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
    
    monthly_diffs = []                                                                           
    for i in range(12): 
        monthly_diffs.append([])

    for i in range(len(time_series)):
        date = time_series[i][0]
        year, month = [int(line) for line in date.split('-')]

        if first_year <= year < last_year:
            next_year_same_month = None
            for j in range(i+1, len(time_series)):
                next_date = time_series[j][0]
                next_year, next_month = [int(line) for line in next_date.split('-')]
                if next_month == month and next_year == year + 1:
                    next_year_same_month = time_series[j]
                    break

            if next_year_same_month is not None:
                diff = (next_year_same_month[1] - time_series[i][1])
                monthly_diffs[month - 1].append(diff)


    result = []
    for diffs in monthly_diffs:
        if diffs:
            avg = sum(diffs) / len(diffs)                                                       
        else:
            avg = 0
        result.append(avg)                                                                      

    return result

time_series_file = CSVTimeSeriesFile(name='C:\\Users\\PC\\OneDrive\\Programmazione\\Esame_russo\\data.csv')
time_series = time_series_file.get_data()
result = compute_avg_monthly_difference(time_series, "1949", "1953")
print(result)