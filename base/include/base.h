#ifndef BASE_H
#define BASE_H


class base
{
    public:
        base();
        ~base();
        base(const base& other);

         void no_argument();
         int show_x();


    protected:
        unsigned int x;

    private:
};

#endif // BASE_H
