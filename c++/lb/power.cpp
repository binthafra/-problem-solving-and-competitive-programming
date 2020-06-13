#include<iostream>
using namespace std;
double power(double,int=2);
int main()
{
    double n,r;
    int p;
    cout<<"enter number:";
    cin>>n;
    cout<<"\nenter power :";
    cin>>p;
    r=power(n,p);
    cout<<"result is:"<<r<<"\n";
    r=power(n);
    cout<<"resut without passing power"<<r<<"\n";
    return 0;
}
double power (double a,int b)
{
    double x=1;
    for(int i=1;i<=b;i++)
    x=x*a;
    return x;
}
