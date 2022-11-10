#include <stdio.h>

int main()
{
    float a,i,s,b,d;
    printf("inserisci il numero dei addendi:");
    scanf("%f", &b);
    for(i=0; i<=b-1; i++)
    {
        printf("inserisci un numero:");
        scanf("%f", &a);
        s = s + a;

    }
    d = s / b;

    printf("la media dei numeri e':%.2f", d);

}
