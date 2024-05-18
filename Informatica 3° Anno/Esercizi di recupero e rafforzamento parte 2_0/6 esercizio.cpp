#include <iostream>
#include <cmath>
using namespace std;
int main()
{
	int a,b,c;
	
	cout<<"Inserisci primo numero : "<<endl;
	cin>>a;
	cout<<"Inserisci secondo numero : "<<endl;
	cin>>b;
	cout<<"Inserisci terzo numero : "<<endl;
	cin>>c;
	
	if(a>b and a>c)
	{
		cout<<a<<" e' il numero maggiore"<<endl;
	}
	if(b>a and b>c)
	{
		cout<<b<<" e' il numero maggiore"<<endl;
	}
	if(c>b and c>a)
	{
		cout<<c<<" e' il numero maggiore"<<endl;
	}
}
