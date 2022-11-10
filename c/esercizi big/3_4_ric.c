#include <stdio.h>

int prime1(int a, int b)
{
    if (b == 1) return 1;
    if (a % b == 0) return 0;
    return prime1(a, b-1);
}

int main()
{ 
    int n, stampa;
    printf("inserisci n: ");
    scanf("%d", &n);
    int m = n-1;
    stampa = prime1(n, m);
    if(stampa == 1) printf("il numero %d e' primo", n);
    else printf("il numero %d non e' primo", n);
}