#include <iostream>
#include <sstream>
#include <string>
#include <cstdlib>
#include <cmath>

using namespace std;

int main() {
    int a, b, c;
    
    cout << "Scrivi il valore di A : ";
    cin >> a;
    cout << "Scrivi il valore di B : ";
    cin >> b;
    cout << "Scrivi il valore di C : ";
    cin >> c;
    if (a > b) {
        if (c >= a) {
            cout << b << endl;
            cout << a << endl;
            cout << c << endl;
        } else {
            if (c >= b) {
                cout << b << endl;
                cout << c << endl;
                cout << a << endl;
            } else {
                cout << c << endl;
                cout << b << endl;
                cout << a << endl;
            }
        }
    } else {
        if (a <= c) {
            if (c >= b) {
                cout << a << endl;
                cout << b << endl;
                cout << c << endl;
            } else {
                cout << a << endl;
                cout << c << endl;
                cout << b << endl;
            }
        } else {
            cout << c << endl;
            cout << a << endl;
            cout << b << endl;
        }
    }
    return 0;
}

