#include "university.h"
#include <iostream>
using namespace std;
university::university()
{
    //ctor
}

university::~university()
{
    //dtor
}
void university::setdata(){

cout<<"please enter University name:"<<endl;
cin>>name;
cout<<"please enter location:"<<endl;
cin>>location;

cout<<"year of establishment:"<<endl;
cin>>year;

}

void university::getdata(){

cout<<"name entered: "<<name<<endl;
cout<<"location entered: "<<location<<endl;
cout<<"year  established: "<<year<<endl;


}
