#include<iostream>
using namespace std;
int main()
{
    int n,temp,a=0;
    //enter number to check pallindrome or not
    cin >> n;
    temp=n;
    while(temp!=0)
    {
        a=a*10;
        a=a+temp%10;
        temp=temp/10;
        }
    if(n==a)
    cout<< n << " is pallindrome";
    else
    cout<< n << " is not pallindrome";

    return 0;
}
