#include <iostream>
#include <cmath>
#include <fstream>
using namespace std;
//ogni riga del filecontiene ilnome e il cellulare della persona
//scrivere un'applicazione per: 1-stampadella rubrica
//2 ricerca di un elemento(la ricerca può avvenire per cognome e si visualizza il num
//o per numero e nel caso si visulizza il cognome. Se no elemento non trovato.
//3 conta contatti,che visualizza quanti contatti ci sono in rubrica
//4 uscita
void rubric(string contatto[],string numero[],int &contatore)
{
	ifstream rubrica("rubrica.txt", ios::in);
	
	int i=0;
	while(!(rubrica.eof()))
    {
        rubrica>>contatto[i]>>numero[i];
        i++;
        contatore++;
    }
 
    
    for(int k=0;k<i;k++)
    {
        cout<<contatto[k]<<" "<<numero[k]<<endl;
    }
    cout<<endl;
}

void ricerca(string contatto[],string numero[])
{
	
	string rice;
	cout<<"Inserisci nome o numero del contatto: ";
	cin>>rice;
	
	int j=0;
	while(j<4)
	{
		if(rice==numero[j])
			cout<<"Contatto trovato "<<contatto[j]<<endl<<endl;
			
		if(rice==contatto[j])
			cout<<"Contatto trovato "<<numero[j]<<endl<<endl;
			
		j++;
	}
}

int main()
{
    int scelta=0;
    string contatto[3],numero[3];
    int contatore;
    
    do
    {
        cout<<"Fare una scelta"<<endl;
        cout<<"0-->Leggi file rubrica e stampa(DA ESEGUIRE PER PRIMO)"<<endl;
        cout<<"1-->Ricerca Contatti"<<endl;
        cout<<"2-->Conta Contatti"<<endl;
        cout<<"3-->CHIUDI"<<endl;
        cout<<"> ";
        cin>>scelta;
        cout<<endl;
    


        switch(scelta)
        {   case 0:rubric(contatto,numero,contatore);break;
            case 1:ricerca(contatto,numero);break;
            case 2:cout<<"Ci sono "<<contatore<<" contatti"<<endl<<endl;break;
            case 3:break;
        }
    }
    while(scelta!=3);
}