#ifndef PERSON_H
#define PERSON_H
#include <iostream>
using namespace std;


class person
{
    public:
        person();
        ~person();
        void setdata();
        void getdata();

    protected:
        int date;
       float height,weight;
        string sex;

    private:
};

#endif // PERSON_H
