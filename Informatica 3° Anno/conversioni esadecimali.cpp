#include <iostream>
#include <cmath>
#include <ctime>
using namespace std;
int main()
{
	srand(time(NULL));
	char Hex[5];
	int decimale;
	
	for(int i=0;i<5;i++)
	{
		Hex[i]=rand()%75+'0';
		
			while(!((Hex[i]>='0' and Hex[i]<='9') or (Hex[i]>='a' and Hex[i]<='f')))
			{
				Hex[i]=rand()%75+'0';
			}
		cout<<Hex[i];
	}
	//cout<<endl<<"succhia"<<endl;
	for(int i=0;i<5;i++)
	{
		
		decimale=decimale+Hex[i]+pow(16, i);
	}
}