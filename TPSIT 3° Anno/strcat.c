#include <stdio.h>
int l (char *s)
{
    int i=0;
    while(*s!=0)
	{
        i++;
        s++;
    }
    return i;
}

void concatena(char *s1,char *s2,char *s3)
{
	int l1=l(s1),l2=l(s2);
	int l3=l1+l2;
	for(int i=0; i<l3; i++)
	{
		if(i<l1)
		{
			*s3=*s1;
			s1++;
			s3++;
		}
		
		else
		{
			*s3=*s2;
			s2++;
			s3++;
		}
	}	
}


int main(){
	char s1[256]="peppino ",s2[256]="adamo",s3[512];
	
	concatena(s1,s2,s3);
	
	printf("concatenazione ----> %s",s3);
	
}