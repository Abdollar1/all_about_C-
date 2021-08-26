#include <iostream>

using namespace std;
 class user{
  private:
        string name;
        int score;
  public:

      void setrecord(){
    cout<<"enter your name"<<endl;
    cin>>name;

    cout<<"enter your score"<<endl;

    cin>>score;

      }
      void getrecord(){
      cout<<name<<score<<endl;

      }




 };

int main()
{
    user man;
    man.getrecord ();
    man.setrecord();


    return 0;
}
