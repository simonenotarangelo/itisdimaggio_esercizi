#include <iostream>

#include <math.h>

using namespace std;

int main()
{
    int cifre,n,numero=0,potenza;

    cout<<"Inserire quante cifre usare"<<endl;
    cin>>cifre;

    for(int i=0;i<cifre;i++){
        cout<<"Inserisci la "<<i+1<<" cifra"<<endl;
        cin>>n;
        potenza=pow(10,(cifre-i-1));
        numero=numero+potenza*n;
    }
    cout<<"Il tuo numero e'";
    cout<<numero;

}
