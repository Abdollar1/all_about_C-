#ifndef MINOR_H
#define MINOR_H

#include <person.h>
#include <iostream>
using namespace std;


class minor : public person
{
    public:
        minor();
        ~minor();
       void setdata();
        void getdata();

    protected:
        string name;
        int age;

    private:
};

#endif // MINOR_H
