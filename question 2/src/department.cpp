#include "department.h"
#include <iostream>
using namespace std;

department::department()
{
    //ctor
}

department::~department()
{
    //dtor
}
void department::setdata(){
cout<<"please enter the name of department:"<<endl;
cin>>department_name;

cout<<"please enter the number of Student:"<<endl;
cin>>numberofstudent;
cout<<"please enter the number of Staff:"<<endl;
cin>>numberofstuff;

}
void department::getdata(){

cout<<"Department name:"<<department_name<<endl;
cout<<"Number of Student:"<<numberofstudent<<endl;
cout<<"Number of Stuff:"<<numberofstuff<<endl;

}







