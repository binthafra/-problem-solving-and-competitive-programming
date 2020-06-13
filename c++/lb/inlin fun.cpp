#include<iostream>
using namespace std;
inline int even(int x)
{
    return !(x%2);
}
int main()
{
    int n;
    cin>>n;
    if(even(n))
    cout <<n<<" is even\n";
    else
    cout<<n<<"is not even\n";
}
