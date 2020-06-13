#include<bits/stdc++.h>
using namespace std;

int main()
{
    queue<int>q;
    cout<<q.size()<<endl;
    q.push(34);
    q.push(15);
    q.push(68);
    q.push(98);
    cout<<q.size()<<endl;

    q.pop();
    q.pop();
    cout<<q.front()<<endl;
    cout<<q.empty()<<endl;
    q.pop();
    q.pop();
   cout<<q.empty()<<endl;

    return 0;

}


