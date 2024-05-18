#include <iostream>
#include <cmath>
using namespace std;
int main()
{
	int som=0, contatore=0, pari=0, dispari=0, zeri=0;
	int n;
	
	cout<<"Inserisci numeri per la media (termina con -1) : "<<endl;
	do
	{
		cin>>n;
		
		if(n!=-1)
		{
			som=som+n;
			contatore++;
			
			if(n%2==0 && n!=0)
			{
				pari++;
			}
			else
			{
				if(n==0)
				{
					zeri++;
				}
				else
				{
					dispari++;
				}
			}
		}
	}while(n!=-1);
	
	cout<<"La media \x8a : "<<float(som/contatore)<<endl;
	cout<<"I numeri pari sono : "<<pari<<endl;
	cout<<"I numeri dispari sono : "<<dispari<<endl;
	cout<<"Gli zeri sono : "<<zeri<<endl;

}
