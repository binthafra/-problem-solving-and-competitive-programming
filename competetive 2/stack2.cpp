#include<bits/stdc++.h>
using namespace std;

int main()
{
    stack<char> st;
    string b;
    cin>>b;
    for( int i=0; i<b.size(); i++)
    {
        char ch;
        ch=b[i];
        if(ch=='(')
        {
            st.push(ch);
        }
        else
        {
            if(!st.empty())
                st.pop();
            else
            {
                cout<<"Not OK";
                return 0;
            }
        }
    }
    if(st.empty())
    {
        cout<<"OK";

    }
    else
    {
        cout <<"Not OK"<<endl;
    }
}
