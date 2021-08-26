#ifndef UNIVERSITY_H
#define UNIVERSITY_H
 #include <iostream>
using namespace std;


class university
{
    public:
        university();
        ~university();
        void getdata();
        void setdata();

    protected:
        string name,location;
        int year;

    private:
};

#endif // UNIVERSITY_H
