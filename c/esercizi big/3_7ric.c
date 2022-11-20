#include <stdio.h>
#include <math.h>

float ric (float n, float p)
{
    if(n==1) return p;
    else return (ric(n-1, p)+(p/ric(n-1, p)))/2;
}

int main()
{
    float n, p, stampa;
    printf("inserisci n: ");
    scanf("%f", &n);
    printf("inserisci p: ");
    scanf("%f", &p);
    stampa = ric(n,p);
    printf("il risultato e' : %f", stampa);
}