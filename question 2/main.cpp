
#include <iostream>
#include "university.h"
#include "department.h"
#include "staff.h"
#include "student.h"

using namespace std;

int main()
{
                    cout<<"******univeersity**********"<<endl;
                   university *uni = new university;
                    uni ->setdata();
                   uni ->getdata();
                   cout<<"*******department*********"<<endl;
                   department *dept = new department;
                   dept ->setdata();
                   dept ->getdata();
                   cout<<"******staff********"<<endl;
                   staff *stf = new staff;
                   stf ->setdata();
                   stf ->getdata();
                   cout<<"*****student*******"<<endl;
                   student *stud = new student;
                   stud ->setdata();
                   stud ->getdata();
return 0;
}
