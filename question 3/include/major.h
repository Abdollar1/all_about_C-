#ifndef MAJOR_H
#define MAJOR_H

#include <person.h>
#include <iostream>
using namespace std;


class major : public person
{
    public:
        major();
        ~major();
    void setdata();
    void getdata();

    protected:
        string status,job;


    private:
};

#endif // MAJOR_H
