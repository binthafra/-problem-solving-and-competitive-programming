#include<iostream>
using namespace std;
class coard
{
    int x,y;
    public:
    coard()
    {
        x=0;
        y=0;
    }
    coard (int i,int j)
    {
        x=i;
        y=j;
    }
    void get_xy(int &i,int &j)
    {
        i=x;
        j=y;
    }
    coard operator++();
};
coard coard::operator++()
{
    x++;
    y++;
    return *this;
}
int main()
{
    coard o1(10,10);
    int x,y;
    ++o1;
    o1.get_xy(x,y);
    cout<<"(++o1)x:"<<x<<",y:"<<y<<"\n";
    return 0;
}
