#include <stdio.h>

int somma(int b[], int m)
{
    int somma = 0;
    for (int i = 0; i < m; i++)
    {
        somma += b[i];
    }
    return somma;


}
int funz(int a[], int n, int b[], int m)
{
    for (int i = 0; i < n; i++)
    {
        if (a[i] == somma(b,m)) return 0;
    }
    return 1;

}


int main()
{
    int n = 3;
    int m = n;
    int a[n];
    for (int i = 0; i < n; i++)
    {
        printf("insersci il valore su a[%d]: ", i);
        scanf("%d", &a[i]);
    } 
    int b[m];
    for (int i = 0; i < m; i++)
    {
        printf("insersci il valore su b[%d]: ", i);
        scanf("%d", &b[i]);
    } 
    int sta = funz(a, n, b, m);
    if (sta == 0) printf("la condizione e' contenta");
    else printf("la condizione non e' contenta");


}