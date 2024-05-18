#include <iostream>
using namespace std;

void contegg(int vet[],int vet1[])
{
	int p=0,n=0;
	
	for(int i=0;i<10;i++)
	{
		if(vet[i]>0)
			p++;
			
		if(vet[i]<0)
			n=n+vet[i];
	}
	
	vet1[0]=p;
	vet1[1]=n;
}

int main()
{
	int vet[10],vet1[2];
	
	for(int i=0;i<10;i++)
		cin>>vet[i];
		
	contegg(vet,vet1);
	
//	cout<<"Conteggio numeri positivi:"<<vet1[0]<<endl<<"Somma numeri negativi:"<<vet1[1];
}