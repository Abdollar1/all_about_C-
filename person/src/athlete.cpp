#include "athlete.h"

athlete::athlete()
{
    //ctor
}

athlete::~athlete()
{
    //dtor
}

athlete::athlete(const athlete& other)
{
    //copy ctor
}
void athlete::getdata(){
cout<<"record your distance"<<endl;
cin>>distance;

}

void athlete::showdata(){
cout<<"Distance"<<distance<<endl;

}
