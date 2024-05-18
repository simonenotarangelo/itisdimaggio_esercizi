#include <stdio.h>
#include <windows.h>
#include <string.h>
#include <stdbool.h>

void stampa(char lettere[],int lung)
{
	for(int i=0;i<lung;i++)
	{
		printf("%c",lettere[i]);
		printf(" ");
	}
}

void showHangman(int errori)
 {

     switch(errori)
     {

     case 0:
         system("cls");
	printf("\n\t||===== ");
	printf("\n\t||    | ");
	printf("\n\t||   %cO/",'\\');
	printf("\n\t||    | ");
	printf("\n\t||   / %c",'\\');
	printf("\n\t||      ");
	break;
     case 1:
         system("cls");
	printf("\n\t||===== ");
	printf("\n\t||    | ");
	printf("\n\t||   %cO/",'\\');
	printf("\n\t||    | ");
	printf("\n\t||     %c",'\\');
	printf("\n\t||      ");
	break;
     case 2:
         system("cls");
	printf("\n\t||===== ");
	printf("\n\t||    | ");
	printf("\n\t||   %cO/",'\\');
	printf("\n\t||    | ");
	printf("\n\t||      ");
	printf("\n\t||      ");
	break;
     case 3:
         system("cls");
	printf("\n\t||===== ");
	printf("\n\t||    | ");
	printf("\n\t||   %cO/",'\\');
	printf("\n\t||      ");
	printf("\n\t||      ");
	printf("\n\t||      ");
	break;
     case 4:
         system("cls");
	printf("\n\t||===== ");
	printf("\n\t||    | ");
	printf("\n\t||   %cO ",'\\');
	printf("\n\t||      ");
	printf("\n\t||      ");
	printf("\n\t||      ");
	break;
     case 5:
         system("cls");
	printf("\n\t||===== ");
	printf("\n\t||    | ");
	printf("\n\t||    O ");
	printf("\n\t||      ");
	printf("\n\t||      ");
	printf("\n\t||      ");
	break;
	
	 case 6:
         system("cls");
	printf("\n\t||===== ");
	printf("\n\t||    | ");
	printf("\n\t||      ");
	printf("\n\t||      ");
	printf("\n\t||      ");
	printf("\n\t||      ");
	break;
      }
      return;
}

void parolascritta(int errori)
{
	printf("Inserire la parola da far indovinare al tuo amico: ");
	char parola[50];
	scanf("%s",&parola);
	
	int lung=strlen(parola);
	char lett[1];
	
	char lettere[lung];
	lettere[0]=parola[0];
	lettere[lung-1]=parola[lung-1];
	
	for(int i=lung-2;i>=1;i--)
		lettere[i]='_';
	
	printf("\n");
	
	showHangman(errori);
	stampa(lettere,lung);
	
	bool err=false;
	do
	{
		printf("\n\nInserisci una lettera:\n");
		scanf("%s",lett);
	
		err=true;
		
		for(int i=1;i<=lung-2;i++)
		{
			if(lett[0]=parola[i])
			{
				lettere[i]=parola[i];
				err=false;
			}
		}	
		
		if(err==true)
		{
			printf("Lettera non presente\n");
			errori--;
		}
		showHangman(errori);
		stampa(lettere,lung);
		
	}while(errori!=0);
	
}

void casuale()
{
	
}

int main()
{
	int errori=6;
	//showHangman(errori);
    printf("BENVENUTO NELL'IMPICCATO!\n\n");
    
    int scelta;
    
    	printf("\n\n");
    	printf("Scegli cosa fare:\n");
    	printf("1-Scrivi da input la parola da indovinare\n");
    	printf("2-Indovina una parola casuale\n");
    	printf("3-Chiudi il gioco\n");
    	printf(">");
    	
    	scanf("%i",&scelta);

    	switch(scelta)
    	{
    		case 1:parolascritta(errori);break;
    		case 2:casuale();break;
    		case 3:break;
		}
		
	return 0;
}