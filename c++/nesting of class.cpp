#include<iostream>
using namespace std;
class A {
int x;
public:
   class B {
         public:
      void display() {
          A b;
          b.x=5;
        cout<<"C++ "<<b.x;
      }
 };};
int main()
{
      A::B d;
      d.display();
return 0;
}
