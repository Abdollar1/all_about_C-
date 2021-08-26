#include <iostream>
#include <base.h>
#include <derived_3.h>
#include <derived_2.h>
using namespace std;

int main()
{
    /*base *bs = new base;
    bs->no_argument();
   cout<<bs->show_x();
*/

derived *d1=new derived();
derived_2 *d2=new derived_2();
derived_3 *d3=new derived_3();
d1->show_x();
d2->show_x();
d3->show_x();

cout<<d1->show_x()<<endl;
cout<<d2->show_x()<<endl;
cout<<d3->show_x()<<endl;

int y;
y=d1->show_x() + d2->show_x() + d3->show_x();

 cout<<y;


return 0;

}
