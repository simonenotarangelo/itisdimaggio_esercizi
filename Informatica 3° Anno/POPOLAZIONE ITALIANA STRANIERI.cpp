#include <iostream>

#include <cmath>

using namespace std;

int main() {
    int pT, pS, pIt, aNNI;
    float tS, tI;
    
    pT = 59700000;
    pS = 5200000;
    pIt = pT - pS;
    tS = 2.6;
    tI = 0.6;
    aNNI=1;
    do {
    	aNNI = aNNI+1;
        pS=(pS + pS * (2.6 / 100));
        pIt=(pIt - pIt * (0.6 / 100));
    } while (pIt >= pS);
    cout<<aNNI<<endl;
    system("pause");
    return 0;
}

