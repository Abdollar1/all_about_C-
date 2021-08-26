#include "base.h"

base::base():x(5)
{
    //ctor
}

base::~base()
{
    //dtor
}

base::base(const base& other)
{
    //copy ctor
}
void base::no_argument(){}
int base::show_x(){

return x;
}
