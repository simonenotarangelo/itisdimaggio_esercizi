#include <iostream>
#include <math.h>
#include <time.h>
using namespace std;
void genera(int vet[])
{
    srand(time(NULL));
    for(int i=0;i<10;i++)
    {
        vet[i]=(rand()%10)+1;
    }
    cout<<endl<<"OPERAZIONE RIUSCITA, CONTINUARE "<<endl;
}
void stampa1(int vet[])
{
    cout<<endl<<"i valore generati sono : ";
    for(int i=0;i<10;i++)
    {
        cout<<vet[i]<<" ";
    }
    cout<<endl;
}

void shift(int i,int vet[],int k)
{
for(int z=i;z<k-1;z++)
vet[z]=vet[z+1];
}

void filtro(int vet[])
{
    int n,k=10;
    for(int i=0;i<k;i++)
    {
        for(int j=0;j<i;j++)
        {
            if(vet[i]==vet[j])
            {
            shift(i,vet,k);
            j=0;
                /*
for(int z=c+1;z<k;z++)
                {
                    vet[z-1]=vet[z];
                }
                vet[k-1]=0;
                k--;
                c=i;*/
            }
        }
    }
}

int main()
{
    int scelta,k,l;
    int vet[10];
    do{
       cout<<endl<<"FARE UNA SCELTA (da 1 a 5)"<<endl;
       cout<<"1- caricare un vettore di 10 elementi con interi casuali da 1 a 10 compresi"<<endl;
       cout<<"2- stampare il vettore generato"<<endl;
       cout<<"3- filtrare il vettore degli elementi che si ripetono"<<endl;
       cout<<"4- stampare il vettore filtrato"<<endl;
       cout<<"5- fine"<<endl;
       cout<<">> ";
       cin>>scelta;
       switch(scelta)
       {
           case 1:{
                    genera(vet);
                    break;
                  }
           case 2:{
                    stampa1(vet);
                    break;
                  }
           case 3:{
                    filtro(vet);
                    break;
                  }
           case 4:{
                    stampa1(vet);
                    break;
                  }
           default:cout<<endl<<"ATTENZIONE VALORE NON VALIDO, REINSERIRE!!!"<<endl;break;
       }
    }while(scelta!=5);
}