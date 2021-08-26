#ifndef PERSONNEL_H
#define PERSONNEL_H

#include <player.h>

#include <iostream>
using namespace std;


class personnel : public player
{
     protected:
         string personalinfor;

    private:

    public:
        personnel();
        ~personnel();
        void input();
        void output();


};

#endif // PERSONNEL_H
