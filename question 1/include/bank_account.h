#ifndef bank_account _H
#define  bank_account_H
#include <iostream>
using namespace std;
class bank_account
{
    public:
 bank_account();
        ~ bank_account();
           void deposit();
        void withdrawal();
        void balance();

    protected:
    double d,w,balancee;
    string account_name,account_number;
    double amount_remaining = 150.45;

    private:
};

#endif //  bank_account_H
