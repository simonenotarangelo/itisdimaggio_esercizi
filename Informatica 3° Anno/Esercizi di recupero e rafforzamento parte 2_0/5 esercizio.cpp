#include <iostream>
#include <cmath>
using namespace std;
int main()
{
	int a,b;
	
	cout<<"Inserisci il primo numero : "<<endl;
	cin>>a;
	cout<<"Inserisci il secondo numero : "<<endl;
	cin>>b;
	
	if(a>b)
	{
	cout<<a<<" e' il valore maggiore"<<endl;
	}
	
	if(b>a)
	{
	cout<<b<<" e' il valore maggiore"<<endl;
	}
	
	if(a==b)
	{
	cout<<"I valori sono uguali"<<endl;
	}
	
	system("pause");
	return 0;
}
