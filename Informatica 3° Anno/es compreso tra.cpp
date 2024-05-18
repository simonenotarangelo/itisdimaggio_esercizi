#include <iostream>
#include <cmath>
using namespace std;

int main() {
	setlocale(LC_ALL, "");
    int x, y, z;
    
    cout << "Inserire variabile X : ";
    cin >> x;
    cout << "Inserire variabile Y : ";
    cin >> y;
    cout << "Inserire variabile Z : ";
    cin >> z;
    if (x > y & z < y) {
        cout << "Y è compreso tra X e Z";
    } else {
        if (z > y & x < y) {
            cout << "Y è compreso tra X e Z" << endl;
        } else {
            cout << "Y non è compreso tra X e Z" << endl;
        }
    }
    return 0;
}