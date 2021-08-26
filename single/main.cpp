

#include <iostream>

using namespace std;

class room{
private:
    int day;
    int total;
    double number;

public:

    void setdata(){
   cout<<"welcome to Abigail Hostel service"<<endl;
   cout<<"enter the number of days spent within a semester:"<<endl;

    while(day!=0){
   cin>>day;

  if(day==1){ cout<<"1 day = 10.0"<<day<<endl;}

  else if(day==2){ cout<<"2 day = 20.0"<<day<<endl;}
  else if (day==3){cout<<"3 days =28.0"<<day<<endl;}
  else if (day==4){cout<<"4 days =36.0"<<day<<endl;}


  }
}
void getdata(){

cout<<day<<endl;


}

};
int main()
{ room *rm=new room;
rm->getdata();
rm->setdata();


}

