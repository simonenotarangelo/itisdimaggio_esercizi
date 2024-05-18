#include <iostream>
#include <time.h>

int main() {
   srand(time_(NULL));
    int heads = 0;
    int tails = 0;

    // Lancio della monetina 10 volte
    for (int i = 0; i < 10; i++) {
        int coin = dis(gen);
        if (coin == 0) {
            heads++;
        } else {
            tails++;
        }
    }
    std::cout << "10 lanci: testa=" << heads << ", croce=" << tails << std::endl;

    heads = 0;
    tails = 0;

    // Lancio della monetina 100 volte
    for (int i = 0; i < 100; i++) {
        int coin = dis(gen);
        if (coin == 0) {
            heads++;
        } else {
            tails++;
        }
    }
    std::cout << "100 lanci: testa=" << heads << ", croce=" << tails << std::endl;

    heads = 0;
    tails = 0;

    // Lancio della monetina 1000 volte
    for (int i = 0; i < 1000; i++) {
        int coin = dis(gen);
        if (coin == 0) {
            heads++;
        } else {
            tails++;
        }
    }
    std::cout << "1000 lanci: testa=" << heads << ", croce=" << tails << std::endl;

    return 0;
}
