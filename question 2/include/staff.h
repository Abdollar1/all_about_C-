#ifndef STAFF_H
#define STAFF_H

#include <department.h>
#include <iostream>
using namespace std;


class staff : public department
{
    public:
        staff();
        ~staff();
        void setdata();
        void getdata();

    protected:
    string name,subject;
    double salary;
    int year;


    private:
};

#endif // STAFF_H
