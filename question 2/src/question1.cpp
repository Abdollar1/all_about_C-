#include "question1.h"

question1::question1()
{
    //ctor
}

question1::~question1()
{
    //dtor
}

    void question1::input(){

    cout<<"index number:"<<endl;
    cin>>index_number;
    cout<<"name"<<endl;
    cin>>name;
     cout<<"age"<<endl;
    cin>>age;

     cout<<" enter score for course 1"<<endl;
     cin>>score1;
     cout<<" enter score for course 2"<<endl;
      cin>>score2;
     cout<<" enter score for course 3"<<endl;
     cin>>score3;
     cout<<" enter score for course 4"<<endl;
     cin>>score4;
     cout<<" enter score for course 5"<<endl;
     cin>>score5;

     total=(score1+score2+score3+score4+score5);
     average=(total/5);


     cwa_initail=78.50;

     actual_cwa = (cwa_initail+average)/2;






    }

         void question1::display(){
  cout<<"Asp et cvdedd program center"<<endl;
     cout<<"index number:"<<index_number<<endl;
     cout<<"name:"<<name<<endl;
     cout<<"age:"<<age<<endl;
       cout<<"average marks scored:"<<average<<endl;
    cout<<"CWA is:"<<actual_cwa<<endl;




     }

