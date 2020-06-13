#include <iostream>
using namespace std;
class myclass
{
    int i;
    public:
    myclass(int n)
    {
        i=n;
        cout<<"constructing "<<i<<"\n";
    }
    ~myclass()
    {
        cout<<"destructing "<<i<<"\n";
    }
    void set_i(int n)
    {
        i=n;
    }
    int get_i()
    {
        return i;
    }
};
    void f(myclass ob)
    {
        ob.set_i(2);
        cout<<"this is local i: "<<ob.get_i()<<"\n";
    }
int main()
{
    myclass o(1);
    f(o);
    cout<<"this i is main : "<<o.get_i()<<"\n";

    return 0;
}
