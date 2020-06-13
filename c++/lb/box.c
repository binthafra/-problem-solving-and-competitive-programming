#include<iosteam>
using namespace std;
class box
{
    double x,y,z;
    public:
    box(double a,double b,double c)
    {
        x=a;
        y=b;
        z=c;
    }
    box vol()
    {
        cout <<x*y*z;
    }
};
int main()
{
    double x,y,z,ob;
    cout <<"eter length";
    cin>>x>>y>>z;
    box.ob(x,y,z);
    ob.vol();
    return 0;
}
