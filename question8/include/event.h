#ifndef EVENT_H
#define EVENT_H

#include <player.h>

#include <iostream>
using namespace std;



class event : public player
{

    protected:
 string event_type,team;
    private:

    public:
        event();
        ~event();
        void input();
        void output();


};

#endif // EVENT_H
