#include <iostream>
#include <cmath>
#include <fstream>
using namespace std;

void file()
{
	int a,resto,x,i;
	
	ifstream decimale("numeri.txt",ios::in);
	
	while(!(decimale.eof()))
	{
		i=0;
		x=0;
		decimale>>a;
		
		do
		{
			resto=a%8;
			a=a/8;
			x=x+(resto*pow(10,i));
			i++;
		}while(a!=0);
		
		cout<<x<<endl;
	}
}

int main()
{
	file();
	
	system("pause");
}