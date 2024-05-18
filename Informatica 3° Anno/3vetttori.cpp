#include <iostream>
#include <cstring>

using namespace std;

int main() {
    char vet1[100], vet2[100], vet3[100];
    cout << "Inserisci il primo vettore di caratteri: ";
    cin >> vet1;
    cout << "Inserisci il secondo vettore di caratteri: ";
    cin >> vet2;
    cout << "Inserisci il terzo vettore di caratteri: ";
    cin >> vet3;

    int len1 = strlen(vet1);
    int len2 = strlen(vet2);
    int len3 = strlen(vet3);

    // Cerca la sotto-sequenza vet2 in vet1
    for (int i = 0; i <= len1 - len2; i++) {
        int j;
        for (j = 0; j < len2; j++) {
            if (vet1[i+j] != vet2[j])
                break;
        }
        if (j == len2) {  // ha trovato la sotto-sequenza
            // Sostituisci la sotto-sequenza con vet3
            for (j = 0; j < len3; j++) {
                vet1[i+j] = vet3[j];
            }
            break;
        }
    }

    cout << "Il vettore risultante \x8a: " << vet1 << endl;

    return 0;
}