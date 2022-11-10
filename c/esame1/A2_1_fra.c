#include <stdio.h>


float funzione(int n)
{
float meno1 = 2;
float meno2 = 1;
float asd;

if (n==0) return 1;
if (n==1) return 2;

for(int i= 2; i<=n ; i++)
    if ((i%2 == 0))
        {
            asd = (i+3*(meno2-2))/meno1;
            meno2 = meno1;
            meno1 = asd;
        }

    else
        {
            asd = (i+3*(meno1-2))/meno2;
            meno2 = meno1;
            meno1 = asd;
        }
    return asd;
}


int main()
{
int n;
printf("Inserisci il valore di n: ");
scanf("%d", &n);
float asd = funzione(n);
printf("Il risultato e' %f", asd);
}