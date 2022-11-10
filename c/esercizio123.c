#include <stdio.h>
//funzione ricorsiva
double my_pow(double a, int b)
{
    if(b == 1)
    {
        return a;
    }
    else
    return a * my_pow(a, b-1);

}

double s_n(int n, double k)
{
    if(n == 1){
        return k * k / 3;
    }
    double num = n * my_pow(k,n+1);
    printf("numeratore : %.2lf\n", num);
    double a_n = num / my_pow(3, n);
    printf("a_%d : %.2lf\n",n, a_n);
    return a_n + s_n(n-1,k);
}


//funzione iterativa
/*
double potenza(double k, int i)
{
    double pot = 1;
    for(int j = 0; j < i; j++)
    {
        pot = pot * k;
    }

}

double s_n(int n, double k)
{
    if(n == 1){
        return k * k / 3;
    }
    double num = n * potenza(k,n+1);
    printf("numeratore : %lf\n", num);
    double a_n = num / potenza(3, n);
    printf("a_%d : %lf\n",n, a_n);
    return a_n + s_n(n-1,k);
}
*/


int main(void)
{
    double k;
    int n; 
    printf("dammi k: ");
    scanf("%lf", &k);
    printf("dammi n: ");
    scanf("%lf", &n);

    double sum = s_n(n,k);
    printf("Sommatoria : %.2lf", sum);

    return 0;
}