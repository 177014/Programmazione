#include <stdio.h>

int main()
{
    double prices[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};

    //printf("%d bytes\n", sizeof(prices)); in questo modo printo il peso dell'arrey ogni double e' 8 bytes

    for(int i=0; i < sizeof(prices)/sizeof(prices[0]); i++) // sizeof di prices mi mi prende il peso si prices/ il peso di un elemento dell'array prices[0] in questo caso sono
    {                                                       //tutti double quindi possiamo mettere qualsiasi posizione.
        printf("%.2lf\n", prices[i]);
    }




    /* un modo per printare gli array
    for(int i=0; i < 7; i++)
    {
        printf("%.2lf\n", prices[i]);
    }
    */
}