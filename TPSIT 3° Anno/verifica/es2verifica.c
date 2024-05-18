#include <stdio.h>

int main() {
	int cont,som=0;
	printf("Inserisci la dimensione del vettore: ");
	scanf("%i",&cont);

	int vet[cont];

	printf("Inserisci i numeri interi:\n");
	for (int i=0;i<cont;i++) 
	{
		scanf("%i", &vet[i]);
	}

	int *punt=vet;

	for (int i=0;i<cont;i++)
	{
		som=som+(*punt);
		punt++;
	}

	printf("La somma degli elementi del vettore e': %d", som);

	return 0;
}