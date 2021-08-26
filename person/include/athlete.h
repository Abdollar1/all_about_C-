#ifndef ATHLETE_H
#define ATHLETE_H
#include <iostream>
#include <person.h>
using namespace std;

class athlete : public person
{
    public:
        athlete();
        ~athlete();
        athlete(const athlete& other);
        void getdata();
        void showdata();
    protected:
        int distance;

    private:
};

#endif // ATHLETE_H
