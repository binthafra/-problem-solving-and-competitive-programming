#include<iostream>
using namespace std;
class box
{
    double x,y,z;
    public:
    box(double a,double b,double c);
    double vol();
};
   box::box(double a,double b,double c)
   {
       x=a;
       y=b;
       x=c;
   }

    double box::vol()
    {
        cout << x*y*z;
    }

int main()
{
    double x,y,z;
    cout <<"Enter length : ";
    cin>>x>>y>>z;
    box ob(x,y,z);
    ob.vol();
    return 0;
}
