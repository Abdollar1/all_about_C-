 #include <iostream>

using namespace std;

int main()
{
    //initializing of ussd
    string ussd = "*177#";
     int digit= 0;
     //the digit and the code both check for the input of 4-digit code
     int code= digit;
     int user,number,amount=0;
     //this is the pin to made the transaction.
     int pin;
     //this allows a user to choose the input.
     int option=0;


    cin>>ussd;


    if(ussd == "*177#"){

        cout<<"please enter your 4-digit code"<<endl;
        cin>>digit;
        //here is were you will enter your unique code.
        if(digit <= 10000){
            cout<<"welcome to customer service center"<<endl;
            cout<<"**********************************"<<endl;
            cout<<"please confirm your 4-unique code"<<endl;
            cin>>code;

//if the digit id equals to the code, it will permit u to have access to our service.
            if(digit==code){
//a user has to choose among any of the offer.
    cout<<" please Press: \n 1:Transfer Money. \n 2:Pay Bills. \n 3:Buy Airtime. \n 4:Withdrawing or Depositing. \n 99:TO Abort"<<endl;
    //user's input.
    cin>>user;
    if(user==1){
            cout<<"TRANSFER MONEY"<<endl;
            cout<<"please enter Receiver's number"<<endl;
            cin>>number;
            cout<<"please re-enter Receiver's number"<<endl;
            cin>>number;
            cout<<"enter Amount"<<endl;
              cin>>amount;
              //overview of transact made.
              cout<<"number:+233"<<number<<" \n "<<"amount:$"<<amount<<endl;
            cout<<"***************"<<endl;
              cout<<"enter your 4-unique code"<<endl;
              cin>>pin;

              if(pin==code){
                cout<<"Transaction made successful"<<endl;
              }
              else if(pin != code){
         cout<<"check your 4-unique"<<endl;
     }
  //ending of the transferring.
    }
  //begins of pay bills.
     else if(user==2){
            cout<<"PAY BILLS"<<endl;
            cout<<" press \n 1:TO Pay Water Bill \n 2:To Pay Electricity Bill \n 3:To Pay DSTV Bill"<<endl;
            cin>>option;
            //paying of water bill
            if(option==1){
                cout<<"PAY WATER BILL"<<endl;
                cout<<"enter meter number"<<endl;
                cin>>number;
                cout<<"enter amount to be paid"<<endl;
                cin>>amount;
                //overview.
                cout<<"Meter number:"<<number<<" amount:$"<<amount<<endl;
                //4 unique code
                cout<<"*********************"<<endl;
                cout<<"enter your 4-unique code"<<endl;
              cin>>pin;

              //here is to confirm that pin ==code
               if(pin==code){
                cout<<"Payment made successful"<<endl;
              }
              else if(pin != code){
         cout<<"check your 4-unique"<<endl;
     }

            }
            //end of paying water bill.

            //begins of paying of electricity bills.
         else if(option==2){
                cout<<"PAY YOUR ELECTRICITY BILL"<<endl;
                cout<<"enter meter number"<<endl;
                cin>>number;
                cout<<"enter amount to be paid"<<endl;
                cin>>amount;
                //overview.
                cout<<"Meter number:"<<number<<" amount:$"<<amount<<endl;
                //4 unique code
                cout<<"*********************"<<endl;
                cout<<"enter your 4-unique code"<<endl;
              cin>>pin;

              //here is to confirm that pin ==code
               if(pin==code){
                cout<<"Payment made successful"<<endl;
     }
     else if(pin != code){
         cout<<"check your 4-unique"<<endl;
     }
     //ending of verification of code.
            }

            //begins of paying DSTV bills
            else if(option==3){
                cout<<"PAY YOUR DSTV BILL"<<endl;
                cout<<"enter DSTV number"<<endl;
                cin>>number;
                cout<<"enter amount to be paid"<<endl;
                cin>>amount;
                //overview.
                cout<<"DSTV number:"<<number<<" amount:$"<<amount<<endl;
                //4 unique code
                cout<<"*********************"<<endl;
                cout<<"enter your 4-unique code"<<endl;
              cin>>pin;

              //here is to confirm that pin ==code
               if(pin==code){
                cout<<"Payment made successful"<<endl;
     }
     else if(pin != code){
         cout<<"check your 4-unique"<<endl;
     }
     //ending of verification of code.
            }
            //end of paying of DSTV BILLS.
          //end of paying bills
     }
     //begins of buying airtime.
     if(user==3){
            cout<<"BUYING OF AIRTIME"<<endl;
            cout<<"please enter your phone number"<<endl;
            cin>>number;
            cout<<"please re-enter your phone number"<<endl;
            cin>>number;
            cout<<"enter Amount"<<endl;
              cin>>amount;
              //overview of transact made.
              cout<<"number:+233"<<number<<" \n "<<"amount:$"<<amount<<endl;
            cout<<"***************"<<endl;
              cout<<"enter your 4-unique code"<<endl;
              cin>>pin;

              if(pin==code){
                cout<<"Transaction made successful"<<endl;
              }
              else if(pin != code){
         cout<<"check your 4-unique"<<endl;
     }
  //ending of the buying airtime
    }
    //begin of withdrawing or depositing.
    else if(user==4){
        cout<<"WITHDRAWING OR DEPOSITING"<<endl;
        cout<<"Press \n 1:To withdraw money \n 2:To Deposit"<<endl;
          //this allows the user to enter an option
          cin>>option;
         //begins the withdrawing
         if(option==1){
            cout<<"Withdrawing Money"<<endl;
            cout<<"******************"<<endl;
            cout<<"please enter your Account Number"<<endl;
            cin>>number;
            cout<<"please re-enter your account number"<<endl;
            cin>>number;
            cout<<"Please enter Amount"<<endl;
            cin>>amount;


            //overview
            cout<<"account number:"<<number<<" Amount:$"<<amount<<endl;

            //confirm and sending with your 4-unique code
              cout<<"enter your 4-unique code"<<endl;
              cin>>pin;

              if(pin==code){
                cout<<"Transaction made successful"<<endl;
              }
              else if(pin != code){
         cout<<"check your 4-unique"<<endl;
     }
     //end of withdrawing
         }

         //begins of depositing
         else if(option==2){
             cout<<"DEPOSITING MONEY"<<endl;
            cout<<"******************"<<endl;
            cout<<"please enter your Account Number"<<endl;
            cin>>number;
            cout<<"please re-enter your account number"<<endl;
            cin>>number;
            cout<<"Please enter Amount"<<endl;
            cin>>amount;


            //overview
            cout<<"account number:"<<number<<" Amount:$"<<amount<<endl;

            //confirm and sending with your 4-unique code
              cout<<"enter your 4-unique code"<<endl;
              cin>>pin;

              if(pin==code){
                cout<<"Transaction made successful"<<endl;
              }
              else if(pin != code){
         cout<<"check your 4-unique"<<endl;
     }
     //end of depositing

         }


        //but if the 4-digit code is more than 4, it will break.
        else if(digit >10000){
            cout<<"wrong 4-digit entered"<<endl;
        }
    }

      //here is to terminate the whole program.
    else if(user==99){
        cout<<"Thanks for using Our Service"<<endl;
    }




        }
        else if(digit!=code){
            cout<<"please check your 4-unique code"<<endl;
        }
    }
    //if ussd code is wrongly entered.

    }
     else { cout<<"check ussd code entered"<<endl;

    }
    return 0;
}





