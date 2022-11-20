#include <stdio.h>

void uga(int a[], int b[], int n)
{
    for(int i = 0 ; i < n; i ++)
    {
        for(int j = 0 ; j < n ; j++)
        {
            if(j != i)
            {
                if (a[i] % a[j] == 0) b[i] = a[i]; // != non funziona == funziona non capisco perche'
            }
        }
    }

}

int main()
{
    int n = 6;
    int a[n];
    int b[n];
    for(int i = 0; i < n; i++)       //for per inserisce i valori sull'array
    {
        printf("inserisci il valore per il a[%d]: ", i);
        scanf("%d", &a[i]);
    }

    printf("\nl'array a[%d] inserito e' \n", n ); // for per stampare array 
    for (int i = 0; i < n; i++)
    {
        printf("%d ", a[i]);
    }
    uga (a,b,n);

    printf("\nl'array b[]:\n"  );
    for (int i = 0; i < n; i++)
    {
        printf("%d ", b[i]);
    }
}