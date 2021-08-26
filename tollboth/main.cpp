#include <iostream>
#include "tollboth.h"
using namespace std;

int main()
{
    tollboth *both= new tollboth;
  int a;
  do{
  cout<<"enter 1 to pay or 0 not to pay \n 99 to exist"<<endl;
    cin>>a;
    switch(a)
    {
    case 1:
        both ->payingcar();
        break;
    case 0:
        both ->nopaycar();
        break;
    case 99:
        both ->display();
        goto end;
    }
  }while(1);
   end:
       return 0;
}
