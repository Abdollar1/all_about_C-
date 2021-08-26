#include "bank_account.h"

bank_account::bank_account()
{
    //ctor
}

bank_account::~bank_account()
{
    //dtor
}
        void bank_account::deposit(){
        cout<<" THE DEPOSIT SECTION \n"<<endl;
        cout<<"Please Enter the account name"<<endl;
        cin>>account_name;
        cout<<"Please enter account number"<<endl;
        cin>>account_number;
        cout<<"Please Enter the amount you want to deposit..."<<endl;
        cin>>d;

        balancee = amount_remaining+d;
        cout<<"you have deposited "<<d<<" and your remaining balance is "<<balancee<<endl;

    }

         void bank_account::withdrawal(){
        cout<<" THE WITHDRAWAL SECTION \n"<<endl;
        cout<<"Please Enter the account name"<<endl;
        cin>>account_name;
        cout<<"Please enter your account number...."<<endl;
        cin>>account_number;
         cout<<"Please enter amount you want to withdraw"<<endl;
         cin>>w;
         if(w>amount_remaining){
                cout<<"INSUFFICIENT BALANCE"<<endl;
         }
         else{
         balancee = amount_remaining - w;
         cout<<"your cash out of "<<w<<" was successful!!"<<endl;
         cout<<"Your remaining balance is"<<balancee<<endl;
         }
     }
     void bank_account::balance(){
          cout<<"CHECK BALANCE \n"<<endl;
     cout<<"please enter the following to check account balance"<<endl;
      cout<<"Please Enter the account name"<<endl;
        cin>>account_name;
        cout<<"Please enter your account number...."<<endl;
        cin>>account_number;
        cout<<"the account balance for "<<account_name<<" is "<<amount_remaining<<endl;
     }


