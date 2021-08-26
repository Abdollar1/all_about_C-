#include "non_academic.h"

non_academic::non_academic()
{
    //ctor
}

non_academic::~non_academic()
{
    //dtor
}

non_academic::non_academic(const non_academic& other)
{
    //copy ctor
}
void non_academic::setdata(){

cout<<"number of section"<<endl;

cin>>no_section;

}
void non_academic::getdata(){


cout<<"section attended:"<<no_section<<endl;
}
