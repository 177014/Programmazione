#include <stdio.h>

/* Es. 1 foglio 3 Si scriva una funzione che riceva in ingresso tre numeri interiπ₯,π¦ e π§ ne restituisca il minimo. 
Si crei poi una funzione di test che prenda in input due dei tre numeri dallβutente, π₯ e π¦, e testi la tripletta (π₯,π¦,π€) con π€β[1,max{π₯,π¦}].
Nota: per testare la tripletta si intende testare ogni possibile tripla di valori ottenuta fissando π₯ ed π¦, e variando π€ da 1 a max {π₯,π¦}. */

int max(int a, int b)
{
    if (a>b) return a;
    else return b;
}

int min (int a, int b, int c)
{
    if (a<b && a < c) return a;
    if (b<c && b < a) return b;
    else return c;
}

int main()
{
    int x, y, i;
    printf("inserisci x: ");
    scanf("%d", &x);
    printf("inserisci y: ");
    scanf("%d", &y);

    for ( i = 1; i <= max(x, y); i++)
    {
        printf( "\ntripletta (%d, %d, %d) - minimo -> %d", x,y,i,min(x,y,i));

    }
    
}