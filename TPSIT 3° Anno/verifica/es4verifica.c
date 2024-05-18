#include <stdio.h>

int funz1(char c) 
{
	return c=='a' || c=='e' || c=='i' || c=='o' || c=='u' ||
	c=='A' || c=='E' || c=='I' || c=='O' || c=='U';
}

int main() 
{
	char str[100];
	int len=0;
	printf("Inserisci una stringa: ");
	scanf("%s",str);

	char *p=str;
	char *p2[100];
	int num=0;

	while(*p!='\0')
	{
		if (funz1(*p))
		{
	 		p2[num]=p;
	 		num++;
	 	}
		p++;
 	}

	printf("Le vocali individuate sono:\n");
	for(int i=0;i<num;i++)
	{
		printf("%c",*p2[i]);
	}
	printf("\n");

	return 0;
}