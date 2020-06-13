#include<iostream>
using namespace std;
class myclass
{
    int a;
    public:
    void set_a();
    int get_a();
};
void myclass::set_a()
{
    cin>>a;
}
int myclass::get_a()
{
    return a;

}
int main()
{
    myclass ob1,ob2;
    ob1.set_a();
    ob2.set_a();
    cout<<ob1.get_a()<<"\n"<<ob2.get_a();
    return 0;
}
