#include <stdio.h>

int padi(int n)
{
    if(n % 2 == 0) return 0;
    else return 1;
}

double ite(int n)
{
    if (n==0) return 1;
    if (n==1) return 2;

    double ris;
    double n_1 = 2;
    double n_2 = 1;

    for(int i = 2; i <= n; i++ )
    {
        if (padi(i) == 0)   //n pari
        {
            ris = (i + 3*(n_2-2))/n_1;   //formula se pari 
        }
        else   //n dispari
        {
            ris = (i + 3*(n_1-2))/n_2;  //formula pari
        }
        n_2 = n_1;
        n_1 = ris;
    }

    return ris;
}

int main()
{  
    int n;
    printf("insersci n :" );
    scanf("%d", &n);
    printf("il risultato e': %lf", ite(n));
}
