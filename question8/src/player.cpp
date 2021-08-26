#include "player.h"

player::player()
{
    //ctor
}

player::~player()
{
    //dtor
}
void player::input(){

cout<<"enter your name"<<endl;
cin>>name;
cout<<"enter your nationality"<<endl;
cin>>nationality;

}
 void player::output(){

 cout<<"name:"<<name<<endl;
 cout<<"nationality:"<<nationality<<endl;
 }

