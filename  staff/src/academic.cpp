#include "academic.h"

academic::academic()
{
    //ctor
}

academic::~academic()
{
    //dtor
}

academic::academic(const academic& other)
{
    //copy ctor
}
void academic::setdata(){
cout<<"number of paper:"<<endl;
cin>>no_paper;
cout<<"number of student:"<<endl;
cin>>no_student;
cout<<"number of conference attended:"<<endl;
cin>>no_conf;

}

void academic::getdata(){
cout<<"your number of:"<<no_paper<<endl;
cout<<"your number of student:"<<no_student<<endl;
cout<<"your number of conference attended:"<<no_conf<<endl;

}
