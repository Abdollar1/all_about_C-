 #include <iostream>
#include "bank_account.h"
using namespace std;
int main()
{
   bank_account *ban = new bank_account ();
    int a;
    while (a!=99){
    cout<<"press 1 to deposit into your account, 2 to withdraw and 3 to check your balance......press 99 to exit"<<endl;
    cin>>a;
    switch(a){
     case 1:
      ban ->deposit();
        break;
    case 2:
      ban ->withdrawal();
        break;
    case 3:
       ban ->balance();
        break;
    default:
        break;
    }
    cout<<"*******************"<<endl;
}


    return 0;
}


