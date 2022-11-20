#include <stdio.h>

int diversi(int a[], int n)
{
    int k = 0;
    for(int i = 0; i < n; i++)
    {
        int j = i + 1;                              // perche' funziona???????
        if (i != j)
        {
            if(a[i] / a[j] == 1) k += 1;
        }

        
    }
    return k;

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
    int stampa = diversi(a, n);
    if (stampa == 0) printf("non ci sono elemti uguali nell'array");
    else printf("ci sono %d coppie di elemti uguali nell'array", stampa);
}
