#include <iostream>
#include <add.h>

using namespace std;

int main()
{
    int c,d;
    cout<<"c"<<endl;
    cin>>c;
    cout<<"d"<<endl;
    cin>>d;
 add *ob= new add;
 ob->setdata();
 cout<<ob->getdat();
    return 0;
}
