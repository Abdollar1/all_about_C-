#include <iostream>

using namespace std;

int main()
{
  int q,p;
int sum;
  p=(1<=10);
  q=(1<=20);

  for(int p=1;p<11 && p>0;p++){
    sum=p+1;
     cout<<"enter P value between 1 and 10"<<endl;
  cin>>p;
    //cout<<p;
  }



 for(int q=1;q<20  && q>0;q++){
    sum=q+1;
    cout<<"enter Q value between 1 and 20"<<endl;
     cin>>q;
   // cout<<q;

 }


  cout<<p+q;


    return 0;
}
