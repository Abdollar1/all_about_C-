#ifndef QUESTION1_H
#define QUESTION1_H
#include <iostream>
using namespace std;

class question1
{

      protected:

         int index_number,age,cwa;
    string name;
    double average,total;
    double cwa_initail,actual_cwa;
    double score1,score2,score3,score4,score5;

    private:
    public:
        question1();
        ~question1();

        void input();
        void display();

};

#endif // QUESTION1_H
