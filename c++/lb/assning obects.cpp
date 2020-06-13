#include<iostream>
using namespace std;
class myclass
{
    int a;
    public:
    void set_a();
    int get_a();
};
void myclass:: set_a()
    {
        cin>>a;
    }
int myclass::get_a()
    {
        return a;
    }
int main()
{
    myclass ob,ob1;
    ob.set_a();
    ob1.set_a();
    cout<<ob.get_a()<<"\n"<<ob1.get_a();
    return 0;
}
