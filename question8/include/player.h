#ifndef PLAYER_H
#define PLAYER_H
#include <iostream>
using namespace std;


class player
{
     protected:
 string name,nationality;
    private:

    public:
        player();
        ~player();
        void input();
        void output();




};

#endif // PLAYER_H
