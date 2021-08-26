#include <iostream>
#include "person.h"
#include "major.h"
#include "minor.h"

using namespace std;

int main()
{
     person * ps = new person;
     ps ->setdata();
     ps ->getdata();

     cout<<"***********"<<endl;
     major *mj = new major;
     mj ->setdata();
     mj ->getdata();
      cout<<"***********"<<endl;
      minor *mn = new minor;
      mn ->setdata();
      mn ->getdata();
    return 0;
}
