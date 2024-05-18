#include <iostream>
#include <fstream>
#include <string.h>
using namespace std;

void voto(int &contatore,float &mediag)
{
	string materia;
	//string mate="matematica";
	float voto;
	
	do
	{
		cout<<"Inserisci nome materia : ";
		cin>>materia;
		
	}while(materia!="matematica" && materia!="italiano" && materia!="informatica" && materia!="inglese" && materia!="sistemi");

	do
	{
		cout<<"Inserisci voto : ";
		cin>>voto;
		mediag+=voto;
		contatore++;
	
	}while(voto<0 && voto>10);
	
	ofstream registro("registro.txt",ios::app);

	registro<<materia<<" "<<voto<<endl;
	registro.close();
	
	

	
}

void stampa()
{
	float voto;
	string materia;
	ifstream registro("registro.txt");
	registro>>materia>>voto;
	while(!(registro.eof()))
	{
		//cout<<'*'<<endl;
		
		cout<<materia<<" "<<voto<<endl;
		registro>>materia>>voto;
	}
	
	registro.close();
}

void medie(int &contatore,float &mediag)
{
	cout<<endl<<"La media globale \x8a : "<<mediag/contatore<<endl;
}

void datimateria()
{
	
}

int main()
{

	int scelta;
	int contatore=0;
	float mediag=0;

	do
	{
		cout<<endl;
	
		cout<<"1-Acquisci materia e voto e inseriscilo sul file"<<endl;
		cout<<"2-Stampa di tutti i dati delle verifiche"<<endl;
		cout<<"3-Stampa della medie di tutte le verifiche"<<endl;
		cout<<"4-Stampa delle verifiche e della media in una materia a scelta"<<endl;
		cout<<"5-Uscita"<<endl;
	
		cin>>scelta;
	
		switch(scelta)
		{
			case 1:voto(contatore,mediag);break;
			case 2:stampa();break;
			case 3:medie(contatore,mediag);break;
			case 4:datimateria();break;
			case 5:break;
		}
	
	}while(scelta!=5);
	
	system("pause");
	return 0;
}