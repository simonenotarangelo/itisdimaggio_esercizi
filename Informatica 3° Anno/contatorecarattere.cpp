#include <iostream>
#include <cmath>
using namespace std;
int main()
{
	char vet[10];
	char carattere;
	int contatore=0;
	string posizione;
	
	cout<<"Inserisci vettore : "<<endl;
	for(int i=0;i<10;i++)
	{
		cin>>vet[i];
	}
	cout<<"Inserisci carattere : ";
	cin>>carattere;
	
	for(int i=0;i<10;i++)
	{
		int vetcont[i];
		if(vet[i]==carattere)
		{
			contatore++;
			vetcont[i]=i+1;
			cout<<"Il vettore compare in posizione : "<<vetcont[i]<<endl;
		}
	}
	
	cout<<"Il carattere compare nel vettore "<<contatore<<" volte"<<endl;
}