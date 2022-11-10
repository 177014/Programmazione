#include <stdio.h>

int ric(int n)
{
    if (n==0) return 0;
    else return (n + ric(n-1));
}
int pot(int n)
{
    if(n==0) return 1;
    if(n==1) return 2;
    else return (2 * pot(n-1));

}


int main()
{
    int n, ris;
    printf("insersci n: ");
    scanf("%d", &n);
    ris = pot(n) * ric(n);
    printf("il risultato e':%d", ris);
}