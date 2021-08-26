#include <iostream>
#include <person.h>
#include <footballer.h>
#include <athlete.h>
using namespace std;

int main()
{
    int a;
    while(a!=0){

    cout<<"choose \n 1 for footballer \n 2 for athlete \n 0 to exist"<<endl;
    cin>>a;



            if(a==1){
cout<<"Thanks for choosing 1"<<endl;
    cout<<"****************"<<endl;
    person *ps=new person;
    ps->getdata();



    footballer *fb=new footballer;
    fb->getdata();
    ps->showdata();
    fb->showdata();

            }

            else if(a==2){
cout<<"Thanks for choosing 2"<<endl;
    cout<<"****************"<<endl;
         person *ps=new person;
         ps->getdata();

        athlete *ath=new athlete;
        ath->getdata();
        ps->showdata();
        ath->showdata();
    }

}
}
