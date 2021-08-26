#include "person.h"


person::person()
{
    //ctor
}

person::~person()
{
    //dtor
}
void person::setdata(){
cout<<"please enter your year of birth:"<<endl;
cin>>date;
cout<<"provide your sex:"<<endl;
cin>>sex;
cout<<"provide your Height:"<<endl;
cin>>height;
cout<<"Provide your weight:"<<endl;
cin>>weight;



}
void person::getdata(){
cout<<"your age is:"<<date<<endl;
cout<<"Sex entered is:"<<sex<<endl;
cout<<"Your height is:"<<height<<endl;
cout<<"Your Weight is:"<<weight<<endl;
}
