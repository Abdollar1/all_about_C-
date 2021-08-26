 #ifndef ADDITION_H
#define ADDITION_H


class addition
{
    public:
        addition();
        ~addition();
        addition(const addition& other);

   void setdata(int,int);

 int getdata();

    private:

        int x,y;
};

#endif // ADDITION_H
