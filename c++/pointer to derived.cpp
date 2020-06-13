#include<iostream>
using namespace std;
class base
{
      public:
      void display()
      {
            cout<<"It's Base Class!"<<endl;
      }
};
class derived1:public base
{
 public:
   void display()
      {
    cout<<"It's First Derived Class!"<<endl;
      }
};
class derived2:public base
{
 public:
      void display()
      {
        cout<<"It's Second Derived Class!"<<endl;
      }
};
int main()
{
      base *basepointer;
      derived1 d1;
      derived2 d2;
      basepointer=&d1;
      basepointer->display();
       basepointer=&d2;
       basepointer->display();
      return 0;
}
