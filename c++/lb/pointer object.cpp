#include<iostream>
using namespace std;
class myclass
{
    int a;
    public:
    myclass();
    int get();
};
myclass ::myclass()
{
    cin>>a;
}
int myclass::get()
{
    return a;
}
int main()
{
    myclass ob;
    myclass *p;
    p=&ob;
    cout<<"value using object:"<<ob.get();
    cout <<"\n";
    cout<<"value using pointer:"<<p->get();
    return 0;
}
