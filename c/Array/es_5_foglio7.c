#include <stdio.h>

void triango(int a[], int n)
{
    int somma = 0;
    for(int i = 1; i < n; i++)
    { 
        somma += i;
        a[i-1] = somma;
    }
    a[n-1] = somma + n;
}

void main()
{
    int n = 19;
    int a[n];
    triango(a, n);
    
    printf("l'array dei primi %d numeri triangolari e' composto da:\n", n );
    for (int i = 0; i < n; i++)
    {
        printf("%d ", a[i]);
    }
}
