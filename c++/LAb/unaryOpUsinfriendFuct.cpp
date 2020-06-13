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
   friend  coard operator+(coard ob1,coard ob2);
};
coard operator+(coard ob1,coard ob2)
{
   coard temp;
   temp.x=ob1.x+ob2.x;
   temp.y=ob1.y+ob2.y;
   return temp;
}
int main()
{
    coard o1(10,10),o2(5,7),o3;
    int x,y;
    o3=o1+o2;
    o3.get_xy(x,y);
    cout<<"(o1+o2)x:"<<x<<",y:"<<y<<"\n";
    return 0;
}
