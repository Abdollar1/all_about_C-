#include <iostream>
#include <tollbooth.h>
using namespace std;

int main()
{
     tollbooth *pay=new tollbooth;
     pay->incoming_car();
     pay->payingCar();
     pay->noPayCar();
     pay->display();
    return 0;
}
