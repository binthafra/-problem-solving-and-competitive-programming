#include<bits/stdc++.h>
using namespace std;
bool cmp(int a, int b)
{
    return a>b;
}
int main()
{
    int x,n;
    vector <int> v;
    cout<<"Enter the number of value : ";
    cin>>n;
    cout<<"Enter values : ";
    for(int i=0; i<n; i++)
    {
        cin>>x;
        v.push_back(x);
    }


        sort(v.begin(),v.end(),cmp);
         cout<<"sorting vector"<<endl;
    for(int i=v.size()-1; i>=0; i--)
        cout<<v[i] <<endl;

    return 0;
}
