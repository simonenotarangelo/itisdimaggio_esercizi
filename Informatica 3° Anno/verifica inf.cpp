#include <iostream>
#include <time.h>
using namespace std;
int main()
{
	int n,k,pari=0,dispari=0;
	srand(time(NULL));
	n=(rand()%701)+299;
	
	for(int i=1;i<=n;i++)
	{
		if(n%i==0)
		{
			k++;
		}
	}
	
	int vet[k];
	
	cout<<n<<endl;
	for(int i=1;i<=n;i++)
	{
		if(n%i==0)
		{
			vet[k]=i;
			
			if(vet[k]%2==0)
			{
				pari++;
			}
			else
			{
				dispari++;
			}
			
		cout<<"Un divisore e' : "<<vet[k]<<endl;
		}
	}
	
	cout<<"Divisori pari : "<<pari<<endl;
	cout<<"Divisori dispari : "<<dispari<<endl;
	
	return 0;

}
