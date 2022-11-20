#include <stdio.h>
#include <math.h>

/*Es. 2 foglio 3 Si scriva una funzione che, ricevuti in ingresso le coordinate𝑝ଵ=(𝑥ଵ,𝑦ଵ) ed 𝑝ଶ=(𝑥ଶ,𝑦ଶ) di due punti   del   piano   cartesiano,   
restituisca   la   loro distanza   euclidea𝑑(𝑝ଵ,𝑝ଶ)=ඥ(𝑥ଵ−𝑥ଶ)ଶ+(𝑦ଵ−𝑦ଶ)ଶ. Nota: la funzione radice quadrata (sqrt) in C viene fornita dalla libreria math.h, 
che va quindi importata come segue: 
*/

double distanza (double a, double b, double c, double d)
{
    double sum, sot1, sot2, pot;
    sot1 = a - c;
    sot2 = b - d;
    pot = pow(sot1, 2) + pow(sot2, 2);
    sum = sqrt(pot);
    return sum;
}
int main()
{
    double x1,x2,y2,y1,stampa;
    printf("inserisci x1: ");
    scanf("%lf", &x1);
    printf("inserisci y1: ");
    scanf("%lf", &y1);
    printf("inserisci x2: ");
    scanf("%lf", &x2);
    printf("inserisci y2: ");
    scanf("%lf", &y2);
    stampa = distanza (x1,y1,x2,y2);
    printf("%lf" , stampa);


}