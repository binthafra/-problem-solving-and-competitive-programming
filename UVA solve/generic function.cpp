#include<iostream>
using namespace std;
template<class X>X min(X a,X b)
{
    if(a<=b)
    return a;
    else
    return b;
}
int main()
{
    cout<<min(12.2, 2.0);
    cout<<endl;
    cout<<min(3,4);
    cout<<endl;
    cout<<min('c', 'a');
    return 0;
}
