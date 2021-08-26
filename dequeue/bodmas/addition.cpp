#include "addition.h"
#include <iostream>

addition::addition(): x(0),y(0)
{
    //ctor
}

addition::~addition()
{
    //dtor
}


void addition::addresults(){
    cout<<"enter a value for X"<<endl;
    cin>>x;


    cout<<"enter a value for y"<<endl;
    cin>>y;
}




void addition:: display(){

cout<<"x value:"<<x<<endl;
cout<<"y value:"<<<y<<endl;


}
