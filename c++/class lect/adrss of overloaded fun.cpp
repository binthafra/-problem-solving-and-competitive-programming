#include <iostream>
using namespace std;
int myfunc(int a);
int myfunc(int a,int b);
int main()
{
int (*fp)(int a ); // pointer to int f(int)
fp = myfunc; // points to myfunc(int)
cout << fp(5);
return 0;
}
int myfunc(int a)
{
return a;
}
int myfunc(int a, int b)
{
return a*b;
}
