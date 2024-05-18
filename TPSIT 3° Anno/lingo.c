#include <stdio.h>
#include <windows.h>
#include <time.h>

void scritt(int scelta,char vettore[][scelta])
{
    char parola[scelta],p[scelta];
    int r=rand()%3;
    int r2;

    //pulizia vettore p per controllo
    for(int i=0;i<scelta;i++)
        p[i]=0;

    printf("Anagramma: ");
    //inserimento lettere nel vettore p
    for(int i=0;i<scelta;i++)
    {
        r2=rand()%scelta;
        if(p[r2]==0)
            p[r2]=vettore[r][i];
        else
            i--;
    }
    printf("%s",p);

    printf("\n");

    //tempo
    for(int i=15;i>=0;i--)
    {
        printf("%i",i);
        printf("\n");
        Sleep(1000);
    }

    scanf("%s",parola);

    //controllo parola
    int c=0;
    for(int i=0;i<scelta;i++)
    {
        if(parola[i]==vettore[r][i])
        {
            c++;
        }
    }
    if(c==scelta)
        printf("Hai indovinato pagliaccio!");
    else
    {
        printf("Hai sbagliato!\nLa parola corretta era: ");
        //stampa parola zio pera
        for(int i=0;i<scelta;i++)
            printf("%c",vettore[r][i]);
    }
}

int main()
{
    srand(time(NULL));
    char vet[3][5]={"linux","cache","virus"};
    char vet1[3][7]={"monitor","browser","cockies"};
    char vet2[3][8]={"firewall","internet","keyboard"};

    printf("Scegli una parola da 5, 7 o 8 lettere:\n");
    int scelta;
    scanf("%i",&scelta);
    switch(scelta)
    {
        case 5:scritt(scelta,vet);break;
        case 7:scritt(scelta,vet1);break;
        case 8:scritt(scelta,vet2);break;
    }

    return 0;
}