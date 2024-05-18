#include <stdio.h>
#include <stdlib.h>


int strilen1(char *stringa){
    int n=0;

    while(*stringa){ //con l'uso del puntatore il controllo sulla condizione *stringa=='\0' è intrinseca
        n++;
        stringa++;
    }
    return n;

}

int strilen2(char *stringa){
    int n=0;
    //for(int *i=stringa; *i;i++)

    for(;*stringa;stringa++){ //miglioramento sintattico del for
        n++;

    }
    return n;

}

int main()
{

    char stringa[20]="Paolo";


    printf("%d", strilen1(stringa));
    printf("%d", strilen2(stringa));
    return 0;
}
