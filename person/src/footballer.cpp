#include "footballer.h"

footballer::footballer()
{
    //ctor
}

footballer::~footballer()
{
    //dtor
}

void footballer::getdata(){

cout<<"please enter your current team:"<<endl;
cin>>team;
cout<<"please which position do you play:"<<endl;
cin>>position;

}
void footballer::showdata(){

cout<<"Current team:"<<team<<endl;
cout<<"your position:"<<position<<endl;

}
