#include <iostream>
#include <cmath>
#include <fstream>
using namespace std;

void elenco()
{
	
}

void acquisto()
{
	
}

void vendita()
{
	
}

int main()
{
	int scelta;
	do
	{	
		cout<<"-1 Elenco degli articoli in magazzino, numeri di pezzi disponibili, prezzo dell'articolo e valorizzazione"<<endl;
		cout<<"-2 Acquisto da articolo"<<endl;
		cout<<"-3 Vendita"<<endl;
		cout<<"-4 Chiudi"<<endl;
		cout<<">";
		cin>>scelta;
		
		switch(scelta)
		{
			case 1:elenco();break;
			case 2:acquisto();break;
			case 3:vendita();break;
			case 4:break;
		}
	}while(scelta!=4);
	
	system("pause");
	return 0;
}