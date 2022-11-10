#include <stdio.h>

int somma(int n)
{
    if(n==0) return 0;

    double f,g;
    f = n % 10;
    g = n / 10;
    return f + somma(g);
}


void main()
{
    int n;
    printf("insersci il numero: ");
    scanf("%d", &n);
    printf("la tua somma e': %d", somma(n));
}