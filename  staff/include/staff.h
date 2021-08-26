#ifndef STAFF_H
#define STAFF_H
#include <iostream>
 using namespace std;

class staff
{
    public:
        staff();
        ~staff();
        staff(const staff& other);


        void setdata();
        void getdata();

    protected:
        unsigned int age;
        string name;
        string gender;
        string dept;


    private:
};

#endif // STAFF_H
