#include <iostream>

using namespace std;

int main()
{
   int m;
   m=(100<=0);
   cout<<"enter your marks"<<endl;
   cin>>m;
   if((m<=100)&&(m>=80)){
    cout<<"your pass with Grade with A"<<endl;
   }

else if((m<=79)&&(m>70)){
    cout<<"you pass with Grade B"<<endl;
}

else if((m<=69)&&(m>=60)){
    cout<<"you pass with Grade C"<<endl;
}
else if((m<=59)&&(m>=50)){
    cout<<"You pass with Grade D"<<endl;
}
    else if((m<=49)&&(m>=0)){
    cout<<"Your fail the exams"<<endl;


}



    return 0;
}
