#include <stdio.h>
int somm(int a[], int n)
{
    int somma = 0;
    for(int i = 0; i< n; i++)
    {  
        if (a[i] % 2 == 0) somma += a[i];
    }
return somma;
}

int main()
{
    int n = 5;
    int a[n];
    for (int i = 0; i < n; i++)
    {
        printf("insersci il valore su a[%d]: ", i);
        scanf("%d", &a[i]);
    }
    int somma = somm(a, n);
    printf("il risultto  e':%d\n", somma);


}

