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

void copy(char *s1, char *s2){
	int l2=l(s2);
	int	l1=l(s1);
	
		while(*s1!=0)
		{
			*s1=*s2;
			s1++;
			s2++;
		}
	
	printf("STRINGHE \n");
	
}

int main(){
	
	char s1[20]="copiatura",s2[30]="ciao";
	copy(s1,s2);
	
	printf("S1 ----> %s\n",s1);
	printf("S2 ---->%s",s2);
	
	
	
}