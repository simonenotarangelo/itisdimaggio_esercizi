#include <iostream>
using namespace std;

int main() 
{
  int num, contatore = 0, somma = 0;

  cout << "Inserisci i numeri (0 per terminare): " << endl;

  do 
  {
    cin >> num; 
    if (num != 0)
	{ 
      contatore++;
      somma= somma+num;
    }
  } while (num != 0);

    cout << "La media aritmetica e': " <<somma / contatore << endl;

  return 0;
}
