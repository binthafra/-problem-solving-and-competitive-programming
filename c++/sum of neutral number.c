#include<stdio.h>
using namespace std;
int main()
{
    int n,sum=0;
    cout << "enter a position integer:";
    cin >> n;
    for (int i =1;i<=n;++i)
    {
        sum +=i;
    }
    cout << "Sum =" << sum;
    return 0;
}
