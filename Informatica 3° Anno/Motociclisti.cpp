//dopo n giri di pista, il primo motociclista ha un vantaggio di 18 sec sul secondo motociclista. Per un problema meccanico
//il primo motociclista è costretto a rallentare. Da quel momento in poi, le 2 velocità medie sono 170 km/h e 190 km/h.
//Visualizzare il distacco tra i 2 dopo 8 giri considerando che il circuito misura 2 km.
//170kmh=47m/s 190kmh=52,7 m/s
#include <iostream>
#include <cmath>
using namespace std;
int main()
{

	
	
	
	
		float v1,v2,vantaggio,distacco,giri,circuito;
	float tempo1,tempo2;
	cout<<"Inserisci i giri : ";
	cin>>giri;
	
	v1=47; //m/s
	v2=52; //m/s
	vantaggio=18; //s
	circuito=2000; //m
	tempo1=circuito/v1;
	tempo2=circuito/v2;
	for(int i=1;i<=giri;i++)
		{
		distacco=distacco+(tempo2-tempo1);
		cout<<distacco;
		}		
	
}
