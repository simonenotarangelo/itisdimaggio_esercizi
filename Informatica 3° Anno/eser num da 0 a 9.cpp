#include <iostream>
#include <sstream>
#include <string>
#include <cstdlib>
#include <cmath>

using namespace std;


int main() {
    int c1, c2, c;
    
    cout << "Inserisci un numero da 0 a 9: ";
    cin >> c1;
    cout << "Inserisci un numero da 0 a 9: ";
    cin >> c2;
    c = c1 + c2;
    if (c >= 10) {
        cout << "1" << endl;
        cout << c << endl;
    } else {
        cout << 0 << endl;
        cout << c << endl;
    }
    return 0;
}

