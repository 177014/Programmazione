#include <stdio.h>
#include <stdlib.h>


int main()
{

		int numero = 0;
		int fattoriale = 1;

		//Chiedo il numero di cui fare il fattoriale e lo salvo nella  variabile numero
		printf("Inserire un numero intero positivo di cui calcolare il fattoriale: ");
		scanf("%d", &numero);

		//Controllo se il numero è maggiore di 0
		if (numero > 0) {

		//Se è maggiore di zero, calcolo il fattoriale
		while (numero > 0)
		{
			fattoriale *= numero;
			numero--;
		}
			//Mostro il risultato del fattoriale
			printf("Il fattoriale vale: %d\n", fattoriale);
		}

		//Se il numero non è positivo informo l'utente  che non si può calcolare il fattoriale
		else {
			printf("Non è possibile calcolare il fattoriale di un numero non positivo! \n");
		}
		system("PAUSE");

    return 0;
}