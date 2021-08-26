#ifndef STUDENT_H
#define STUDENT_H

#include <department.h>


class student : public department
{
    public:
        student();
        ~student();
        void setdata();
        void getdata();

    protected:
        string name,course;
        int years,mark;

    private:
};

#endif // STUDENT_H
