#include "student.h"
#include <iostream>
using namespace std;

student::student()
{
    //ctor
}

student::~student()
{
    //dtor
}

void student::setdata(){
cout<<"please enter student your name:"<<endl;
cin>>name;
cout<<"please enter your course:"<<endl;
cin>>course;
cout<<"please provide the year of course:"<<endl;
cin>>year;
cout<<"please enter your total marks:"<<endl;
cin>>mark;



}
void student::getdata(){

cout<<"name:"<<name<<endl;
cout<<"course:"<<course<<endl;
cout<<"years of course:"<<year<<endl;
cout<<"total marks:"<<mark<<endl;

}
