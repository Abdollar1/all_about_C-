#include "staff.h"

staff::staff()
{
    //ctor
}

staff::~staff()
{
    //dtor
}

staff::staff(const staff& other)
{
    //copy ctor
}
void staff::setdata(){
        cout<<"enter your name:"<<endl;
        getline (cin,name,'\n');
        cout<<"enter your gender:"<<endl;
        cin>>gender;
        cout<<"enter your age:"<<endl;
        cin>>age;

        cout<<"enter your department:"<<endl;
        cin>>dept;

}
void staff::getdata(){

cout<<"your name is:"<<name<<endl;
cout<<"your gender was:"<<gender<<endl;
cout<<"your age is:"<<age<<endl;
cout<<"your are in a DEPARTMENT OF:"<<dept<<endl;
}
