#include<iostream>
using namespace std;
int main()
{
    int voti[4], k;
    string v[4], n, n1;
    float S=0, M=0;
    int centr=0, inf=0, sup=3;




    for (int i=0;i<4;i++)
    {
        cout<<"inserisci il cognome e il rispettivo voto: ";
        cin>>v[i]>>voti[i];

    }


    for (int i=0;i<3;i++)
    {
        for (int c=i+1;c<=3;c++)
        {
            if(voti[i]<voti[c])
            {
                n=v[i];
                v[i]=v[c];
                v[c]=n;


                k=voti[i];
                voti[i]=voti[c];
                voti[c]=k;

            }
        }
    }
     for (int i=0;i<4;i++)
    {

        cout<<v[i]<<" "<<voti[i]<<endl;

    }
    for(int i=0; i<4; i++) {
        S=S+voti[i];
    }
    cout<<endl;
    M=S/4;
    cout<<M<<endl;
    for (int i=0; i<4; i++) {
        if(voti[i]<=M) {
            cout<<"L'alunno : "<<v[i]<<" il voto : "<<voti[i]<<endl;
        }
    }
    /*int i=0;
    while(v[i]!="Doggo" && i<4) {
    i++;
    }
    if(v[i]=="Doggo")
        cout<<"lo stronzo e' stato trovato alla posizione : "<<i-1<<endl;*/


        for (int i=0;i<3;i++)
    {
        for (int c=i+1;c<=3;c++)
        {
            if(v[i]>v[c])
            {
                n1=v[i];
                v[i]=v[c];
                v[c]=n1;
            }
        }
    }
         for (int i=0;i<4;i++)
        {
        cout<<v[i]<<endl;
        }

        while() {
            centr=(sup+inf)/2;
        }






        return 0;
}
