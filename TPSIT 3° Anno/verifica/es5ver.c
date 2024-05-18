#include <stdio.h>
#include <string.h>

int main() 
{
	char str[50];
	printf("Inserisci parola : \n");
	scanf("%s",&str);
	char parola[50];
	printf("Inserisci parola da cercare: \n");
	scanf("%s",&parola);
	int pos=0;

	int str_len=strlen(str);
	int parola_len=strlen(parola);

	for (int i=0;i<=str_len-parola_len;i++)
	{
		int j=0;
		while(j<parola_len && str[i+j]==parola[j])
		{
			j++;
 		}
		if (j==parola_len)
		{
			pos=i;
			break;
 		}
	}

	if (pos==-1)
	{
		printf("La parola '%s' non e' presente nella stringa '%s'\n", parola, str);
	} 
	else
	{
		printf("La parola '%s' si trova in posizione %d nella stringa '%s'\n",parola, pos, str);
	}

	return 0;
}