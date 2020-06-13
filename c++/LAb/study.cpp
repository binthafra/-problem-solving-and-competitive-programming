#include<iostream>
using namespace std;
class study
{
    public:
    string school,degree;

};
class employee
{
    public:
    string title,school,degree,name;
    int number,position;
    void getdata()
    {
        cout<<"input name institution,degree earned,name of emplyee,employee number and position of emplyee";
         cin>>school>>degree>>name>>number>>title;
    }
    void putdata()
    {
         cout<<"Name institution : "<<school<<"\ndegree earned :"<<degree<<"\nname of emplyee : "<<name<<"\nemployee number : "<<number<<
         "\nposition of emplyee : "<<position;
    }
};
class labour
{
    public:
    float earning;
    void getdata()
    {
        cout<<"input name of emplyee,employee number and earning"<<"\n";
         cin>>name>>number>>earning;
    }
    void putdata()
    {
         cout<<"\nname of emplyee : "<<name<<"\nemployee number : "<<number<<
         "\earning of emplyee : "<<position;
    }
};
int main()
{
    manager m;
    m.getdata();
    m.putdata();
    labour l;
    l.getdata();
    l.putdata();

    return 0;
}
