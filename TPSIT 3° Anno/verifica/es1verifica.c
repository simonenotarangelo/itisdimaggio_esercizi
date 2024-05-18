#include <stdio.h>

int main()
{
	int intero=0;
	float virgola=0.0;
	char carattere=' ';
	
	//puntatori per le diverse variabili
	int *puntint=&intero;
	float *puntfl=&virgola;
	char *puntcar=&carattere;
	
	*puntint=10;
	*puntfl=77.3;
	*puntcar='@';
	
	printf("variabile intera: %d\n", *puntint);
 	printf("variabile float: %f\n", *puntfl);
 	printf("Valore della variabile char: %c\n",*puntcar);
}