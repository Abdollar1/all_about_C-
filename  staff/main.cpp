#include <iostream>
#include <staff.h>
#include <non_academic.h>
#include <academic.h>
using namespace std;

int main()
{
     int a;
  while(a!=0){

    cout<<"press 1 for non-academic"<<endl;
    cout<<"press 2 for academic"<<endl;
    cin>>a;

    if(a==1){

    cout<<"welcome as a non-academic"<<endl;

      staff *stff=new staff;
   stff->setdata();
 stff->getdata();



      non_academic *nadc= new non_academic;
   nadc->setdata();

    nadc->getdata();
    }

    else if(a==2){
        staff *stff=new staff;
        stff->setdata();
stff->getdata();




      academic *adc=new academic;
    adc->setdata();

    adc->getdata();


    }



}



    return 0;
}
