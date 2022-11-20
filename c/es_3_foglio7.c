#include <stdio.h>

int prodotto(int a[], int n, int b[])
{
    int pro = 0;
    int somma = 0;
    for (int i = 0; i < n; i++)
    {
        pro = a[i] * b[i];
        somma += pro;
    }
    return somma;

}





int main()
{
    int n = 3;
    int a[n];
    for (int i = 0; i < n; i++)
    {
        printf("insersci il valore su a[%d]: ", i);
        scanf("%d", &a[i]);
    } 
    int b[n];
    for (int i = 0; i < n; i++)
    {
        printf("insersci il valore su b[%d]: ", i);
        scanf("%d", &b[i]);
    } 
    int sta = prodotto(a, n, b);
    printf("la sommatoria e' di %d", sta);

}