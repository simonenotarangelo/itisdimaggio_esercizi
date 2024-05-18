#include <iostream>
#include <cmath>
using namespace std;
int main()
{
	int m[4][3],somma=0;
	
	for(int i=0;i<4;i++)
	{
		for(int j=0;j<3;j++)
		{
			cin>>m[i][j];
			somma=somma+m[i][j];
		}
	}
	cout<<endl<<"La somma e' "<<somma<<endl;

	system("pause");
	return 0;
}