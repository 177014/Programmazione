#include <stdio.h>

/* Es. 1 foglio 3 Si scriva una funzione che riceva in ingresso tre numeri interi𝑥,𝑦 e 𝑧 ne restituisca il minimo. 
Si crei poi una funzione di test che prenda in input due dei tre numeri dall’utente, 𝑥 e 𝑦, e testi la tripletta (𝑥,𝑦,𝑤) con 𝑤∈[1,max{𝑥,𝑦}].
Nota: per testare la tripletta si intende testare ogni possibile tripla di valori ottenuta fissando 𝑥 ed 𝑦, e variando 𝑤 da 1 a max {𝑥,𝑦}. */

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