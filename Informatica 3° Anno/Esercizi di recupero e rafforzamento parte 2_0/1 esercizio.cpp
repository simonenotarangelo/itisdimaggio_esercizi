#include <iostream>
using namespace std;
int main()
{
	int a,b;
	
	cout<<"Inserisci A : ";
	cin>>a;
	cout<<"Inserisci B : ";
	cin>>b;
	
	if(b>=0)
	{
		cout<<"b e' positivo"<<endl;
		
	}
	else
	{
		cout<<"b e' negativo"<<endl;
	}
	
	if(a%2==0)
	{
		cout<<"a e' pari"<<endl;
	}
	else
	{
		cout<<"a e' dispari"<<endl;
	}
	
	cout<<"La somma e'"<<a+b<<endl;
	
	system("pause");
	return 0;
}