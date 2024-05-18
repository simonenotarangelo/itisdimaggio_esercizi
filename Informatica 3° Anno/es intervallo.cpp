#include <iostream>
#include <math.h>

using namespace std;

int main()
{
	int n1,n2,somma,conta;
	double media;
	cout<<"Inserire il primo numero: ";
	cin>>n1;
	cout<<"Inserisci il secondo numero: ";
	cin>>n2;
	
	somma=0;
	conta=0;
	
	if(n1>n2) {
		
		for(int i=n2;i<=n1;i++) {
			
			cout<<i;
			cout<<",  ";
			
			somma=somma+1;
			conta=conta+1;
		}
		
		cout<<"Multipli di 3: ";
		
		for(int i=n2;i<=n1;i++) {
			
			if(i%3==0) {
				
				cout<<i;
				cout<<",  ";
				
			}
			
		}
	
			}
			
			else {
		
		cout<<"Intervallo : ";
		
		for(int i=n1;i<=n2;i++) {
			
			cout<<i;
			cout<<",  ";
			
			somma=somma+i;
			conta=conta+1;
			
			
		}
	
			cout<<"Multipli di 3: ";
			
			for(int i=n1;i<=n2;i++) {
				
				if(i%3==0){
					
					cout<<i;
					cout<<",  ";
					
				}
			}
	
		}
	
		media=somma/conta;
		
		cout<<"Somma: ";
		cout<<somma;
		cout<<",  ";
		cout<<"Media: ";
		cout<<media;
		
	}
