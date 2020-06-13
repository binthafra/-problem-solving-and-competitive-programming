#include<iostream>
#include<cmath>

using namespace std;
int main()
{
    float a,b,c;
    cin>> a>>b;
    //if use pow input int or float
    //if use ^ we cant use float
    c=sqrt(pow(a,2)+pow(b,2));
    cout<< c;

    return 0;


}
