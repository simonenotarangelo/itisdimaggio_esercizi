#include <iostream>
using namespace std;

void elenco(string vet[],int n)
{
	for(int i=0;i<n;i++)
		cout<<vet[i]<<endl;
}

void voto(string vet[],int voti[],int n)
{
	for(int i=0;i<n;i++)
	{
		cout<<"Cognome : "<<vet[i]<<endl;
		cout<<"Voto : "<<voti[i]<<endl<<endl;
	}
}

void media(int voti[],int n)
{
	int media=0;
	for(int i=0;i<n;i++)
		media=media+voti[i];
	
	cout<<"La media generale e' : "<<media/n<<endl;
}

void bravi(string vet[],int voti[],int n)
{
	int media=0;
	for(int i=0;i<n;i++)
		media=media+voti[i];
	
	media=media/n;
	
	for(int i=0;i<n;i++)
	{
		if(voti[i]>=media)
		{
			cout<<vet[i]<<" e' un bravo."<<endl;
		}
	}
}

int main()
{
	int n, scelta;
	cout<<"Inserisci numero alunni : ";
	cin>>n;
	
	string vet[n];
	int voti[n];
	
	cout<<"Inserire cognome e voti alunni : "<<endl;
	for(int i=0;i<n;i++)
	{
		cout<<"Cognome: ";
		cin>>vet[i];
		cout<<"Voto : ";
		cin>>voti[i];
		cout<<endl;
	}
	
	do
	{
		cout<<endl;
		cout<<"MENU'"<<endl<<"1-Elenco alunni"<<endl<<"2-Elenco voti alunni"<<endl<<"3-Media generale"<<endl<<"4-Visualizza alunni bravi(condotta >= alla media)"<<endl<<"5-Concludi programma"<<endl<<">";
		cin>>scelta;
		
		switch(scelta)
		{
			case 1:elenco(vet,n);break;
			case 2:voto(vet,voti,n);break;
			case 3:media(voti,n);break;
			case 4:bravi(vet,voti,n);break;
			case 5:break;
		}
	}while(scelta!=5);
	
	return 0;
}