#include <iostream>
#include <cmath>
#include <fstream>
using namespace std;

int main() 
{
    int contatore=0;
    ifstream testo("testo.txt");

	char c;
	char carattere;
    cout<<"Inserisci un carattere: ";
    cin>>c;

    while(!(testo.eof()))
	{
		testo>>carattere;
        if (c==carattere)
        	contatore++;
    }

    cout<<"Il carattere "<<c<<" compare "<<contatore<<" volte nel file."<<endl;

    testo.close();
    return 0;
}