#include <stdio.h>

int restituzione(int x, int y, int *s)
{
    *s = x * y;
    return(x + y);
}

int main()
{
    int x,y, prodotto, somma;
    printf("insersci x:");
    scanf("%d" , &x);
    printf("insersci y:");
    scanf("%d" , &y);
    somma = restituzione(x, y, &prodotto);
    printf("la tua somma e':%d\n", somma);
    printf("la tua somma e':%d", prodotto);
}