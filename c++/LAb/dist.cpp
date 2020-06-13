#include<iostream>
using namespace std;
class dist
{
public:
    double a;
    dist(double x)
    {
        a=x;
    }
    virtual void trav_time()
    {
        cout<<"Mhp= "<<a/60<<"\n";
    }
};
class metric:public dist
{
public:
    metric(double x):dist(x) {}
    void trav_time()
    {
        cout<<"kph ="<<a/100<<"\n";
    }
};
int main()
{
    dist *p,mph(80.00);
    metric kph(70);

    p=&mph;
    p->trav_time();

    p=&kph;
    p->trav_time();

    return 0;
}
