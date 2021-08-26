 #include <iostream>

 using namespace std;

 class store{
 private:

    double milk,indomie,tomato,eggs,rice;
    int q_milk,q_indomie,q_tomato,q_eggs,q_rice;
    double price;


 public:
    store(): rice(20.00),tomato(12.00),eggs(12.00),milk(9.00),indomie(6.00){

    }
    void setdata(){

    cout<<"rice"<<endl;
    cin>>q_rice;
    cout<<"tomato"<<endl;
    cin>>q_tomato;
    cout<<"eggs"<<endl;
    cin>>q_eggs;
    cout<<"milk"<<endl;
    cin>>q_milk;

    cout<<"indomie"<<endl;
    cin>>q_indomie;


    }

  void getdata(){

  price= (rice * q_rice) + (tomato * q_tomato) + (indomie * q_indomie) + (milk * q_milk) + (eggs * q_eggs);

  cout<<"price=S"<<price<<endl;

  }

 };

 int main()
 {
 store customer;
 customer.setdata();
 customer.getdata();

 return 0;
 }
