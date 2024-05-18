#include <iostream>
#include <cmath>
using namespace std;
int main()
{
	int ins,a,b;
	
	do
	{
		cout<<"Premi 1: Addizione"<<endl<<"Premi 2: Sottrazione"<<endl<<"Premi 3: Moltiplicazione"<<endl<<"Premi 4: Divisione"<<endl<<"Premi 5: CONCLUDI PROGRAMMA"<<endl;
		cin>>ins;
		
		if(ins==1)
		{
		cout<<"Inserisci il primo valore : ";
		cin>>a;
		cout<<"Inserisci il secondo valore : ";
		cin>>b;
		cout<<"La somma e' "<<a+b<<endl<<endl;
		}
		
		if(ins==2)
		{
		cout<<"Inserisci il primo valore : ";
		cin>>a;
		cout<<"Inserisci il secondo valore : ";
		cin>>b;
		cout<<"La sottrazione e' "<<a-b<<endl<<endl;
		}
		
		if(ins==3)
		{
		cout<<"Inserisci il primo valore : ";
		cin>>a;
		cout<<"Inserisci il secondo valore : ";
		cin>>b;
		cout<<"La moltiplicazione e' "<<a*b<<endl<<endl;
		}
			
		if(ins==4)
		{
		cout<<"Inserisci il primo valore : ";
		cin>>a;
		cout<<"Inserisci il secondo valore : ";
		cin>>b;
		cout<<"La divisione e' "<<a/b<<endl<<endl;
		}
		
	}while(ins!=5);
	
	return 0;
}
