#include <stdio.h>

int funz(int a[], int n, int k)
{
    for(int i = 0; i < n-2; i++)
    {
        if(a[i] + a[i+1] + a[i+2] == k ) return 1;
    }
    return 0;
}



int main()
{
    int n = 6;
    int a[n];
    int k;
    for(int i = 0; i < n; i++)       //for per inserisce i valori sull'array
    {
        printf("inserisci il valore per il a[%d]: ", i);
        scanf("%d", &a[i]);
    }
    printf("inserisci k: ");
    scanf("%d", &k);

    printf("\nl'array a[%d] inserito e' \n", n );
    for (int i = 0; i < n; i++)
    {
        printf("%d ", a[i]);
    }
    if (funz(a,k,n) == 0) printf("\nesistono tre elementi dell'array di cui la somma e' %d",k);
    else printf("fuck u");


}