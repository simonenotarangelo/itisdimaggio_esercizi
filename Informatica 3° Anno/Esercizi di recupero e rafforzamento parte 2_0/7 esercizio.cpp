#include <iostream>
#include <cmath>

using namespace std;

int main() {
  float a, b, c;

  cout<<"Inserisci i coefficienti dell'equazione di secondo grado (a, b, c):"<<endl;
  cin>>a>>b>>c;

  float delta=b*b-4*a*c;

  if(delta<0)
   {
    cout<<"L'equazione non ha soluzioni reali."<<endl;
   }
  if(delta==0) 
  {
    float x=-b/(2*a);
    cout<<"L'equazione ha una soluzione doppia: x = "<<x<<endl;
  } 
  if(delta>0)
  {
    float x1 = (-b+sqrt(delta)) / (2*a);
    float x2 = (-b-sqrt(delta)) / (2*a);
    cout << "L'equazione ha due soluzioni distinte: x1 = "<<x1<<", x2 = "<<x2<<endl;
  }

  return 0;
}
