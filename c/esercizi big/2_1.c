#include <stdio.h>
#include <stdlib.h>

/* ES.2 cartella 2Leggere da tastiera un generico numero  e stampare un messaggio che indichi se èpositivo o negativo. 
Dopodichè stampare il valore assoluto . Risolvere l’eserciziosenza alcuna variabile di appoggio.*/

int main()
{
    float n;
    printf("inserisci un numero :");
    scanf("%f", &n);
    if (n>0) printf("%f e' positivo", n);
    else printf("%f e' negativo", n);
    printf("\nil valore assoluto e': %d", abs(n));
    
}