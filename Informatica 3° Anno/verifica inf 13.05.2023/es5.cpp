#include <iostream>
#include <cmath>
#include <fstream>
using namespace std;
int main()
{
	ifstream moto("moto.txt");
	
	int var;
	int min=1000;
	int cont=0,cont2=0;
	
	while(!(moto.eof()))
	{
		moto>>var;
		
		if(var<min)
			min=var;
	}
	
	cout<<"La velocita' minima e' "<<min<<endl;
	moto.close();
	
	ifstream moto1("moto.txt");
	while(!(moto1.eof()))
	{
		cont++;
		moto1>>var;
		if(var==min)
		{
			cout<<"velocita' raggiunta al secondo "<<cont<<endl;
			cont2++;
		}
	}
	
	cout<<"Velocita' comparsa "<<cont2<<" volte"<<endl;
	
	moto.close();
}