#include<bits/stdc++.h>
using namespace std;

int main()
{
    stack<int>st;
    cout<<st.size()<<endl;
    st.push(33);
    st.push(14);
    st.push(56);
    st.push(69);
    cout<<st.size()<<endl;
    cout<<st.top()<<endl;
    st.pop();
    st.pop();
    cout<<st.top()<<endl;
    cout<<st.empty()<<endl;
    st.pop();
    st.pop();
    cout<<st.empty()<<endl;

    return 0;

}

