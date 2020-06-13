#include<iostream>
using namespace std;
class cube
{    int side;
    public:
    cube()
    {
        side=10;
    }
};

int main()
{
    cube c;
    cout<<c.side;
}
