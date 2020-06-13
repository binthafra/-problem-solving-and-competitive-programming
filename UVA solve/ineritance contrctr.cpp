#include<iostream>
using namespace std;
class B1
{
    public:
    B1()
    {
        cout<<"cons B1\n";
    }
    ~B1()
    {
        cout<<"des B1\n";
    }
};
class B2
{
    int b;
    public:
    B2()
    {
        cout<<"cons B2\n";
    }
    ~B2()
    {
        cout<<"des B2\n";
    }
};
class D:public B1,public B2
{
    public:
    D()
    {
        cout<<"cons D\n";
    }
    ~D()
    {
        cout<<"des D\n";
    }
};
int main()
{
    D ob;
    return 0;
}
