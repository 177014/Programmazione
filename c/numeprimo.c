#include <stdio.h>
#include <stdlib.h>

int is_prime(int n, int m){ 

    if(m == 1) 
        return 1;

    if(n % m == 0)
        return 0;
    
    return is_prime(n, m - 1);

}
int main() {
    int n;
    printf("inserire un numero intero positivo: ");
    scanf("%d", &n);
    if (n==1)
        printf("1 e' primo \n", n);
    else {
    int m = n -1;
    if (is_prime(n, m) == 1)
        printf("%d e' primo \n", n);

    else
        printf("%d non e' primo\n", n);
    }

}
// n = 7, m = 6
// n % m -> 0 -> m e un divisiore di n -> n non primo
// altrimenti n % m -> !0
// allora m -> m - 1 = 6