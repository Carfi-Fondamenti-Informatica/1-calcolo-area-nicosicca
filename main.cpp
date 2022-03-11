#include <iostream>
using namespace std;

int main(){
  double a=0,b=0,c=0,R=0;
  
  cin>>a>>b>>c;
  //area triangolo
  R=(a*b)/2;
  cout<<R<<endl;
  //area quadrato
  R=a*a;
  cout<<R<<endl;
  //area rettangolo
  R=a*b;
  cout<<R<<endl;
  //area trapezio
  R=((a+b)*c)/2;
  cout<<R<<endl;

  return 0;
}
