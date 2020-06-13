#include<iostream>
using namespace std;
class test
{
    private :
    int m;
    public:
    void getdata()
    {
        cout <<"enter nmber : ";
        cin>>m;
    }
    void display()
    {
        cout <<m<<"\n";
    }
};
int main()
{
   test T;
   test *p;

   T.getdata();
   T.display();

   p=new test;
   p->getdata();
   (*p).display();
}


