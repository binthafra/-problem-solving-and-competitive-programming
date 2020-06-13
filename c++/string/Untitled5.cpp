#include<iostream>
using namespace std;
class myclass
{
    int a;
    public:
    myclass();
    int get();
};
myclass::myclass()
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
    cout<<"value 1="<<ob.get()<<"\n";
    cout<<"value 2="<<p->get();
    return 0;
}
