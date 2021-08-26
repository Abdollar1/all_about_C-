#include "event.h"

event::event()
{
    //ctor
}

event::~event()
{
    //dtor
}
void event::input(){

cout<<"event type"<<endl;
cin>>event_type;
cout<<"name of your team"<<endl;
cin>>team;


}
void event::output(){
    cout<<"type of event booked:"<<event_type<<endl;
    cout<<"name of the team:"<<team<<endl;





}
