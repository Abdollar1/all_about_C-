#include "tollbooth.h"
#include <iostream>
using namespace std;

 tollbooth::tollbooth():cars(0),amount(0)
{
    //ctor
}

tollbooth::~tollbooth()
{
    //dtor
}




void tollbooth::incoming_car(){
cout<<"welcome to Adiembra tollbooth service"<<endl;
cout<<"press 1 to pay or 2 not to Pay"<<endl;
cin>>value;

cout<<"Press Q to about"<<endl;
cin>>value;



};



  while(value==1 && value==2){

 if(value==1){

    payingCar();
          }
 else if (value==2){

    noPayCar();

      }
else {
    break;
}


}




             void tollbooth::payingCar(){

                cars+=1;
               amount+=0.5;
            }

            void tollbooth::noPayCar(){
             cars+=1;
            }
            void tollbooth::display(){
            cout<<"total number of cars :"<<cars<<endl;
            cout<<"total amount :"<<amount<<endl;

            }



