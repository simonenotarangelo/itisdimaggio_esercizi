//codice c,inserire l'esercizio da svolgere qui in basso : 
/*
	TRISSE
*/
#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
//Funzione per verificare se le coordinate inserite sono valide
int inserimento_coordinate(int x, int y,char pedine[3][3],char carattere)
{
	//Controlla che la coordinata x sia compresa tra 0 e 3
	do
	{
	   do
	    {
	        printf("\nInserire riga\n>");
			scanf("%i",&x);
	    }
	    while(x > 3 || x < 0);
	
	    //Controlla che la coordinata y sia compresa tra 0 e 3
	    do
	    {
	        printf("\nInserire colonna\n>");
			scanf("%i",&y);
	    }
		while(y > 3 || y < 0);
		
		if(pedine[x][y]!=' ')
			printf("La posizione \x8a piena!\n");		
	}
	while(pedine[x][y]!=' ');	
	
	pedine[x][y]=carattere;
}
//Funzione per stampare il campo da gioco
void campo(char pedine[3][3], char g1x, char g1o, int x, int y)
{
    printf("     |     |     \n");
    printf("  %c  |  %c  |  %c   \n", pedine[0][0], pedine[0][1], pedine[0][2]);
    printf("_____|_____|_____\n");
    printf("     |     |     \n");
    printf("  %c  |  %c  |  %c   \n", pedine[1][0], pedine[1][1], pedine[1][2]);
    printf("_____|_____|_____\n");
    printf("     |     |     \n");
    printf("  %c  |  %c  |  %c   \n", pedine[2][0], pedine[2][1], pedine[2][2]);
    printf("     |     |     \n");
}
//Funzione per verificare se c'è un vincitore
bool win(char pedine[3][3])
{
    int i;

    //Controlla le righe
    for (i = 0; i < 3; i++)
    {
        if (pedine[i][0] == pedine[i][1] && pedine[i][1] == pedine[i][2])
            return true;
    }

    //Controlla le colonne
    for (i = 0; i < 3; i++)
    {
        if (pedine[0][i] == pedine[1][i] && pedine[1][i] == pedine[2][i])
            return true;
    }

    //Controlla le diagonali
    if ((pedine[0][0] == pedine[1][1] && pedine[1][1] == pedine[2][2]) || (pedine[0][2] == pedine[1][1] && pedine[1][1] == pedine[2][0]))
        return true;

    //Se non c'è un vincitore, la funzione restituisce false
	return false;
}	
int main()
{
	char pedine[3][3]={{' ',' ',' '},{' ',' ',' '},{' ',' ',' '}},g1x='X',g1o='O',vet[20],vet1[20];
	int x,y,var=0;
	
	printf("Inserire il nome del primo player\n>");
	scanf("%s",vet);
	
	printf("Inserire il nome del secondo player\n>");
	scanf("%s",vet1);
	
	for(int i=0;i<9;i++)
	{
	if(var%2==0)
		{		
			printf("Tocca al giocatore con le %c %s",g1x,vet);
					
			inserimento_coordinate(x,y,pedine,g1x);
		
			campo(pedine,g1x,g1o,x,y);
			
			if(i>=4)
			{
				if(win(pedine))
				{
				    printf("THE WINNER IS %s!",vet);
				    break;
				}
				else if(i == 8)
				{
				    printf("%s e %s hanno pareggiato!",vet,vet1);
				    break;
				}
			}			
		}	
		else
		{
			printf("Tocca al giocatore con le %c %s",g1o,vet1);
			
			inserimento_coordinate(x,y,pedine,g1o);
	
			campo(pedine,g1x,g1o,x,y);
			
			if(i>=4)
			{
				if(win(pedine))
				{
				    printf("THE WINNER IS %s!",vet1);
				    break;
				}
				else if(i == 8)
				{
				    printf("%s e %s hanno pareggiato!",vet,vet1);
				    break;
				}
			}	
		}
		var=var+1;
	}
	return 0;
}
