#include <iostream>

using namespace std;
 class home{

private:

     int room,num;

     int a_room1,a_room2,a_room3;
     double amount;
public:
home(): a_room1(20),a_room2(30),a_room3(50){

};

void setdata(){

 cout<<"welcome to Asap room service"<<endl;
 cout<<"enter the number of day your wants to spend it here"<<num<<endl;
 cin>>room;
 cout<<"press 1. to select room_1 and pay 20 \n press 2.to select room_2 and pay 30 \n press 3. to select room_3 and pay 50"<<room<<endl;
 cin>>num;
}
 void getdata(){


 if(num==1){
    amount=a_room1*num;

 }
 else if(num==2){
    amount=a_room2*num;

 }
 else if(num==3){
    amount=a_room3*num;


 }


cout<<amount;
}

};

int main()
{
  home me;

 me.setdata();
 me.getdata();

    return 0;
}

