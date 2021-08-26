#include "person.h"

person::person()
{
    //ctor
}

person::~person()
{
    //dtor
}

person::person(const person& other)
{
    //copy ctor
}
void person::getdata(){

cout<<"Please enter the name of the prayer:"<<endl;
cin>>name;

cout<<"Please enter your Age:"<<endl;
cin>>age;
cout<<"Please enter your Height:"<<endl;
cin>>height;

cout<<"Please Don't  forget to enter your wight:"<<endl;
cin>>weight;

}

void person::showdata(){

cout<<"*******************"<<endl;
cout<<"prayer name:"<<name<<endl;


cout<<"prayer age:"<<age<<endl;

cout<<"prayer height:"<<height<<endl;

cout<<"prayer weight:"<<weight<<endl;


}
