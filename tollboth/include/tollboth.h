#ifndef TOLLBOTH_H
#define TOLLBOTH_H
#include <iostream>
using namespace std;

class tollboth
{


    protected:
    unsigned int numofcars;
    double amount;
    string pay;

    private:


    public:
        tollboth();
        virtual ~tollboth();
        void payingcar();

        void nopaycar();
        void display();

};

#endif // TOLLBOTH_H
