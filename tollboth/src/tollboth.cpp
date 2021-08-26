#include "tollboth.h"

tollboth::tollboth():numofcars(0),amount(0.0)
{
    //ctor
}

tollboth::~tollboth()
{
    //dtor
}
void tollboth::payingcar(){

numofcars++;
amount = amount+0.5;



}
void tollboth::nopaycar(){
numofcars++;

}
void tollboth::display(){


 cout<<"number of cars:"<<numofcars<<endl;
 cout<<"money collected:"<<amount<<endl;

}
