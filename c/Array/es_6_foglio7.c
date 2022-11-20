#include <stdio.h>

void ord(int a[], int n)
{
    for (int i = 0; i < n -1; i++) // selection sort sort
    {  
        int min = i;
        for (int j = i + 1; j < n; j++)
        {
            if (a[j] < a[min])
                min = j;
        }
        int temp = a[i];
        a[i] = a[min];
        a[min] = temp;
    }

/*     int temp;
    for (int j = 0; j < n -1; j++)              // bubble sort
    {  
        for (int i = j +; i < n -1; i++)
        {
            if (a[i] > a[i+1])
            {
                a[i+1] = temp;
                a[i+1] = a[i];
                a[i] = temp;
            } 
        }
    

    } */
}


int kesimo(int a[], int n, int k) // ritorna il k-esimo numero intero piu' piccolo dell'array
{
    ord(a, n);
    return a[k-1];
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
    printf("inserisci il k-esimo numero che vuoi trovare: ");
    scanf("%d", &k);

    printf("\nl'array a[%d] ordinato e' \n", n );
    for (int i = 0; i < n; i++)
    {
        printf("%d ", a[i]);
    }
    printf("\nil %d-esimo numero piu' piccolo dell'array e': %d ", k, kesimo(a,n,k) );


}
