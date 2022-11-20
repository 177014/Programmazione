#include <stdio.h>
#include <math.h>

int ric(int i)
{
    int j = 0;
    j = i;
    if (i==0) return 0;
    return j + ric( i-1);
}
int main()
{
    int n, stampa;
    printf("inserisci n: ");
    scanf("%d", &n);
    stampa = ric(n);
    printf("la sommatoria e' : %d", stampa);
}