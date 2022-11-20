#include <stdio.h>


int prime1(int a)
{
    int c = 0;
    for (int i = a-1; i>=1; i--)
    {
        if(a % i == 0) c++;

    }
    return c;

}

int main()
{ 
    int n, stampa;
    printf("inserisci n: ");
    scanf("%d", &n);
    stampa = prime1(n);
    if ( n == 1 ) printf("1 e' primo");
    else
    {
        if ( stampa == 1) printf(" il numero %d e' primo", n);
        else printf("il numero %d non e' primo", n);
    }

}