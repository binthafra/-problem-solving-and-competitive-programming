#include<iostream>
using namespace std;
class myclass
{
    int a;
    public:         //access specifier
    void set_a(int num);  // member function
    int get_a();
};
void myclass::set_a(int num)
{
    a=num;
}
int myclass::get_a()
{
    return a;
}
int main()
{
    myclass ob,ob1; //create object
    ob.set_a(10);
    ob1.set_a(20);
    cout << ob.get_a() <<"\n"<< ob1.get_a();
    return 0;
}

