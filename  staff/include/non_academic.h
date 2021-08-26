#ifndef NON_ACADEMIC_H
#define NON_ACADEMIC_H

#include <staff.h>
#include <iostream>

using namespace std;



class non_academic : public staff
{
    public:
        non_academic();
        ~non_academic();
        non_academic(const non_academic& other);

        void setdata();

        void getdata();

    protected:
        unsigned no_section;

    private:
};

#endif // NON_ACADEMIC_H
