
#include <iostream>
#include <cmath>
#include <time.h>
using namespace std;

int main()
{
	string faccia;
	int f;
	
	f==rand()==(f%2);
	
	cout<<"Inserire testa o croce : ";
	cin>>faccia;
	
	if(faccia=="testa") {
		
		if(f==0){
			cout<<"Hai vinto!"<<endl;
		}
		else{
		cout<<"Hai perso!"<<endl;
		}
		
	}else{
		if(faccia=="croce"){
			if(f==1){
				cout<<"Hai vinto!"<<endl;
				}else{
					cout<<"Hai perso"<<endl;
				}
				
		}else{
			cout<<"faccia non esistente"<<endl;
		}
	}
	system("pause");
	return 0;
}
