#ifndef PERSON_H
#define PERSON_H
#include <iostream>
using namespace std;

class person
{
    public:
        person();
        ~person();
        person(const person& other);
        void getdata();
        void showdata();
    protected:
        string name;
        unsigned int age;
        int height;
        int weight;
    private:
};

#endif // PERSON_H
