#include "staff.h"

staff::staff()
{
    //ctor
}

staff::~staff()
{
    //dtor
}

void staff::setdata(){
cout<<"Staff name:"<<endl;
cin>>name;
cout<<"please enter the subject:"<<endl;
cin>>subject;
cout<<"please provide year of experience:"<<endl;
cin>>year;
cout<<"please enter Salary:"<<endl;
cin>>salary;



}
void staff::getdata(){

cout<<"Name of Staff: "<<name<<endl;
cout<<"subject: "<<subject<<endl;
cout<<"year of experience: "<<year<<endl;
cout<<"salary per month: $ "<<salary<<endl;

}
