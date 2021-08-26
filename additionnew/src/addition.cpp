
#include "addition.h"

addition::addition():x(0),y(0)
{
    //ctor
}

addition::~addition()
{
    //dtor
}

addition::addition(const addition& other)
{
    //copy ctor
}
 void addition::setdata(int m,int n){

     x=m,
     y=n;

 }
 int addition::getdata(){

 return x+y;
 }
