print("Questo programma ti calcola la media in base ai valori che inserisci (inserisci 0 per terminare)")
m = 0
n = 1
somma = 0
while n !=0:
    n = int(input("inserisci il tuo numero :"))
    somma = somma + n
    print('la somma è di:', somma)
    m = m + 1
media = somma / (m-1)
print('la tua media è:', media)