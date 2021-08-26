#ifndef ACADEMIC_H
#define ACADEMIC_H

#include <staff.h>


class academic : public staff
{
    public:
        academic();
        ~academic();
        academic(const academic& other);
        void setdata();
        void getdata();

    protected:
        unsigned no_paper;
        unsigned no_student;
        unsigned no_conf;

    private:
};

#endif // ACADEMIC_H
