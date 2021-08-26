#ifndef FOOTBALLER_H
#define FOOTBALLER_H
#include <iostream>
#include <person.h>
using namespace std;

class footballer : public person
{
    public:
        footballer();
        ~footballer();
     void showdata();
     void getdata();
    protected:
        string team;
        unsigned int position;

    private:
};

#endif // FOOTBALLER_H
