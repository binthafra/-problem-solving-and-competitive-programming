#include<iostream>
#include<cmath>
using namespace std;
int main()
{
    float a,Y,x;
    cin>>x;
    a=(x-1)/x;
    Y=a+(a*a)/2+(a*a*a)/3+(a*a*a*a)/4;
    cout<<Y;

    return 0;


}
