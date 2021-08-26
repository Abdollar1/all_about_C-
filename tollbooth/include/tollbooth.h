#ifndef TOLLBOOTH_H
#define TOLLBOOTH_H


class tollbooth
{

    private:
        unsigned int cars;
        double amount;
        int p,q;
        int value;

    public:
        tollbooth();
        virtual ~tollbooth();
        void payingCar();
         void noPayCar();
        void incoming_car();
        void display();
        char key();



};

#endif // TOLLBOOTH_H
