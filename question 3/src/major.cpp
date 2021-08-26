#include "major.h"

major::major()
{
    //ctor
}

major::~major()
{
    //dtor
}

void major::setdata(){
cout<<"please provide your status(Married,single,widow):"<<endl;
cin>>status;
cout<<"please provide your job:"<<endl;
cin>>job;



}
void major::getdata(){
cout<<"status: "<<status<<endl;
cout<<"job: "<<job<<endl;

}
