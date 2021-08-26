#ifndef DEPARTMENT_H
#define DEPARTMENT_H

#include <university.h>


class department : public university
{
    public:
        department();
        ~department();
        void getdata();
        void setdata();

    protected:
    string department_name;
    int numberofstudent,numberofstuff;

    private:
};

#endif // DEPARTMENT_H
