#include <iostream>
using namespace std;
int main()
{
    int n,i,odd_sum=0,even_sum=0;
    cout << "enter a number : ";
    cin  >> n;
    for(i=1;i<=n;i++)
    {
    if(n%2==0)
     even_sum=even_sum+i;
     else
     odd_sum=odd_sum+i;
    }
        cout<< n <<" even.";
            cout<< n <<" is odd.";

    return 0;
}

