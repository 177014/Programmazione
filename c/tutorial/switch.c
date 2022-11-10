#include <stdio.h>

int main()
{
    int d;
    printf("\ninserisci il griono della settimana:");
    scanf("%d", &d);

    switch (d)
    {
    case 1:
        printf("lunedi");
        break;
    case 2:
        printf("martedi");
        break;
    case 3:
        printf("mercole");
        break;
    case 4:
        printf("giova");
        break;
    case 5:
        printf("venere");
        break;
    case 6:
        printf("sabo");
        break;
    case 7:
        printf("domenica");
        break;
    default:
        printf("numero non corretto bith");
        break;
    }
}