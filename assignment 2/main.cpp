#include <iostream>

using namespace std;
class score{
    private:

    int maths,science,graphic,social,french;

    double c_maths,c_science,c_graphic,c_social,c_french;
    int mark;
    double average,total;

    public:
      score(): maths(3),science(3),graphic(2),social(3)French(2),{

       }

        void setdata(){
            cout<<"welcome to exams report"<<endl;
            cout<<"maths"<<endl;
            cin>>maths;
            cout<<"science"<<endl;
            cin>>science;
            cout<<"graphic"<<endl;
            cin>>graphic;
            cout<<"social"<<endl;
            cin>>social;
            cout<<"french"<<endl;
            cin>>freanch;





        }


 void getdata(){
 total= maths+science+graphic+social;
 average=total/4;


}




};

int main()
{
 score asap;
 asap.setdata();
 asap.getdata();




    return 0;
}
