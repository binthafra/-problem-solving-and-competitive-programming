#include<iostream>
using namespace std;
inline int max (int x,int y,int z)
{
    return x>y?(x>z? x:z) :(y>z? y:z);
}
int main()
{
    int a,b,c;
    cin>>a>>b>>c;
    cout<<max(a,b,c);
    return 0;
}
