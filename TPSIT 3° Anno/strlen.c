#include <stdio.h>
int l(char *s, int i)
{
    
	while(*s!=0)
	{
        i++;
        s++;
    }
    return i;
}

int main()
{
	int i=0;
    char s[30]="peppepazzerello";
	printf("%d", l(s, i));
}