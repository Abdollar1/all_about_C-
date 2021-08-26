#ifndef DERIVED 2_H
#define DERIVED 2_H

#include <base.h>


class derived 2 : public base
{
    public:
        derived 2();
        ~derived 2();
        derived 2(const derived 2& other);
        int show_x();

    protected:
int x;
    private:
};

#endif // DERIVED 2_H
