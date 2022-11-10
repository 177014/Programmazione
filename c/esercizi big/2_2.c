#include <stdio.h>
/*Dati due interi positivi  e  da tastiera, calcolare la sommatoria:e stampare a schermo il risultato.*/

int main()
{
    int i,n,k;
    printf("inserisci n: ");
    scanf("%d", &n);
    printf("inserisci k: ");
    scanf("%d", &k);
    int sum = 0;
    int tot = k;
    for(i=1; i<=n; i++)
    {
        sum += tot;
        tot = tot * k;


   
    }
    printf("il risultato e':%d ", sum);
}

