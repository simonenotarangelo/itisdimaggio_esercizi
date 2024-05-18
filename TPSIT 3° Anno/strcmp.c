#include <stdio.h>
int l(char *s)
{
    int i=0;

    while(*s!=0)
	{
        i++;
        s++;
    }
    return i;
}

int confronta(char *s1, char *s2)
{
	int s;
	
	while(*s1==*s2)
	{
		if(*s1==0)
		{
			return 0;
		}
		s1++;s2++;
	}	
	return *s1-*s2;		
}

int main()
{
	char s1[20]="abc", 
	s2[30]="def";
	int a=confronta(s1,s2);
	
	if(a==0)
		printf("Le due stringhe sono uguali.");
	
	else
	{
		if(a>0)
			printf("s1 viene dopo di s2");
		else
			printf("s1 viene prima di s2");	
	}
}