#include<iostream>
#
using namespace std;
class building
{
    public:
    int floors;
    int rooms;
    int footage;
};
class house:public building
{
    public:
    int bedrooms;
    int bathrooms;
    house (int a,int b,int c,int d,int e)
    {
        floors=a;
        rooms=b;
        footage=c;
        bedrooms=d;
        bathrooms=e;
    }
    void show()
    {
        cout<<"floors="<<floors<<"\n";
        cout<<"roos="<<rooms<<"\n";
        cout<<"footage="<<footage<<"\n";
        cout<<"bedrooms="<<bedrooms<<"\n";
        cout<<"bathrooms="<<bathrooms<<"\n";
    }
};
class office:public building
{
    public:
    int fire;
    int telephone;
    office(int a,int b,int c,int d,int e)
    {
        floors=a;
        rooms=b;
        footage=c;
        fire=d;
        telephone=e;
    }
    void show()
    {
        cout<<"no of floors="<<floors<<"\n";
        cout<<"no of rooms="<<rooms<<"\n";
        cout<<"no of footage="<<footage<<"\n";
        cout<<"no of fire="<<fire<<"\n";
        cout<<"no of telphone="<<telephone<<"\n";
    }
};
int main()
{
    house h(5,3,1200,3,3);
    h.show();
    office o(10,10,2000,10,10);
    o.show();

    return 0;
}
