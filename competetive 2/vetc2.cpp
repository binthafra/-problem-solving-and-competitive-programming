#include<bits/stdc++.h>
using namespace std;
int main()
{
    int x;
    vector <int> v;
    for(int i=0; i<5; i++)
    {
    cin>>x;
    v.push_back(x);
    }
    cout<<"printing vector"<<endl;
    for(int i=0; i<v.size(); i++)
        cout<<v[i] <<" ";
            return 0;
}

