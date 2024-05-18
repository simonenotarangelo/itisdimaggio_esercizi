/*#include <stdio.h>
#include <math.h>
int main()
{
	int lung,esa,dec,resto;
	//char dec;
//	printf("Inserisci lunghezza numero");
	//scanf("%i",&lung);
	resto=dec;
	for(int i=0;i<=resto;i++)
	{
		if(resto/16!=0)
		{
			resto=resto/16;
		}
		printf();
	}
	
}
*/
#include <stdio.h>
#include <math.h>
#include <string.h>

int esa_decimale(char hex[]) {
    int len = strlen(hex);
    int base = 1;
    int dec = 0;
    for (int i = len-1; i >= 0; i--) {
        if (hex[i] >= '0' && hex[i] <= '9') {
            dec += (hex[i] - 48) * base;
            base = base * 16;
        }
        else if (hex[i] >= 'A' && hex[i] <= 'F') {
            dec += (hex[i] - 55) * base;
            base = base * 16;
        }
    }
    return dec;
}

void decimalToHex(int decimal, char hex[]) {
    int i = 0;
    while (decimal != 0) {
        int temp = decimal % 16;
        if (temp < 10)
            hex[i++] = temp + 48;
        else
            hex[i++] = temp + 55;
        decimal /= 16;
    }
    strrev(hex);
}

int main() {
    char hex[20];
    int decimal;
    printf("Inserisci numero esadecimale: ");
    scanf("%s", hex);
    decimal = esa_decimale(hex);
    printf("Numero decimale: %d\n", decimal);
    decimalToHex(decimal, hex);
    printf("Numero esadecimale : %d\n", hex);
}