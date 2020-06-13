#include<bits/stdc++.h>
using namespace std;

int main()
{
    string str;
    str="To be or not to be";
    int loc =str.find("be");

    if(loc==-1)
        cout<<"not found";
    else
        cout<<loc;

    return 0;
}
