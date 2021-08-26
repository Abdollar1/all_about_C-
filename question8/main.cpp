#include <iostream>
#include "player.h"
#include "event.h"
#include "personnel.h"
using namespace std;

int main()
{
    player *cro=new player;
    cro ->input();
    cro ->output();

 event *messi = new event;
 messi -> input();

 messi -> output();

 personnel * puyol = new personnel;

 puyol -> input();
 puyol -> output();

}
