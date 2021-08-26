#ifndef DERIVED_3_H
#define DERIVED_3_H
#include <derived.h>
#include <derived_2.h>




class derived_3 : public derived,public derived_2
{
    public:
        derived_3();
        ~derived_3();
        derived_3(const derived_3& other);



    protected:


    private:
};

#endif // DERIVED_3_H
