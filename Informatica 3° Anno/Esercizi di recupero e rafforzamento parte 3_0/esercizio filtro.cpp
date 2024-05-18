#include <iostream>
using namespace std;

int main()
{
    char vettore[10];
    int numero = 0;
    int potenza = 1;

    cout<<"Inserisci vettore : "<<endl;
    for(int i = 0; i < 10; i++)
    {
        cin >> vettore[i];
    }

    for(int i = 9; i >= 0; i--)
    {
        if(vettore[i] >= '0' && vettore[i] <= '9')
        {
            numero = numero + (vettore[i] - '0') * potenza;
            potenza = potenza * 10;
        }
    }

    cout << numero << endl;

    return 0;
}
// - '0'