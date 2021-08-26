#ifndef DERIVED_H
#define DERIVED_H

#include <base.h>


class derived : virtual public base
{
    public:
        derived();
        ~derived();
        derived(const derived& other);

    protected:

    private:
};

#endif // DERIVED_H
