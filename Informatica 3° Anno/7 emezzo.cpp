//visualizzare il punteggio ottenuto estrendo casualmente 2 carte dal mazzo di carte nopaletano
#include <iostream>
#include <cmath>
#include <time.h>
using namespace std;
int main()
{
	float somma=0;
	srand(time(NULL));
	for(int i=1;i<=2;i++){
		int r=rand();
		int c=(r%10)+1;
		cout<<c<<" ";
		if(c>7){
			
			somma=somma+0.5;}
		else{
			somma=somma+c;
						}
					}
			if(somma<=7.5){
				cout<<"hai vinto, complimenti!";
			} else {
				cout<<"Bravo, hai perso, ma ritenta!";
			}
		
		
}