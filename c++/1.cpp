#include<iostream>
using namespace std;
void A(int=8,float=5.5);
int main()
{
    A(2.6);
    return 0;
}void A(int i,float j)
{
    cout<<i<<"\t"<<j;
}
