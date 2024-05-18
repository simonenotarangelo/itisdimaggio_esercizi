#include <iostream>
#include <cmath>

using namespace std;

int main() {
    int c1, c2, somma, x;
    
    cout << "Inserisci un numero binario da 0 a 1 : ";
    cin >> c1;
    cout << "Inserisci un numero binario da 0 a 1 : ";
    cin >> c2;
    somma = c1 + c2;
    if (somma >= 2) {
        cout << "Il risultato e' 10";
    } else {
        if (somma == 1) {
            cout << "Il risultato e' 1";
        } else {
            cout << "Il risultato e' 0";
        }
    }
    return 0;
}

