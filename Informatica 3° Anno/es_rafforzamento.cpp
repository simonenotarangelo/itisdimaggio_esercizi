#include <iostream>
#include <math.h>
using namespace std;
int main()
{
    /*
    string alunno1,alunno2,temp;

    cout<<"cognome alunno 1 : ";
    cin>>alunno1;

     cout<<endl<<" cognome alunno 2 :";
    cin>>alunno2;

   alunno1=alunno2;
    alunno2=alunno1;
    cout<<"alunno1 : "<<alunno1<<endl;
    cout<<"alunno2 : "<<alunno2;


    int n1, n2;
    int somma;


    cout<<"inserire il valore dei due numeri : ";
    cin>>n1>>n2;
    somma=n1+n2;

    cout<<"la somma dei due numeri e' : ";
    cout<<somma;
   */

   float d;
   int scelta;

   cout<<endl<<"Inserisci un numero reale : ";
   cin>>d;
   do
   {
       cout<<endl<<"1- Area del quadrato di lato D"<<endl<<"2- Area del cerchio di diametro D"<<endl<<"3- Area del triangolo di lato D"<<endl<<"4- Fine"<<endl;
       cin>>scelta;

       switch(scelta)
       {
            case 1:cout<<"L'area del quadrato e' : "<<d*d<<endl;
                  break;
			case 2:cout<<"L'area del cerchio e' : "<<pow((d/2),2)*3.14<<endl;
				  break;
			case 3:cout<<"L'area del triangolo e' : "<<(((d/2)*sqrt(3))*d)/2<<endl;
       }
   }while(scelta!=4);
   
   system("pause");
   return 0;
}
