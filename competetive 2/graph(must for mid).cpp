//MID A ASHBE

#include<bits/stdc++.h>
using namespace std;
int main()
{
    vector<int>adj[100];
    int node,edge,a,b;
    cout<<"how many nodes :";
    cin>>node;
    cout <<"how many edge :";
    cin>>edge;
    int i, j;
    cout<<"input edges :";

    for(i=0; i<edge; i++)
    {
        cin>>a>>b;
        adj[a].push_back(b);
        adj[b].push_back(a);
    }
    queue<int>q;
    int s;
    int dis[100]; //distance
    int visited[100]= {0};
    cout <<"input source :";
    cin>>s;
    dis[s]=0;
    q.push(s);
    visited[s]=1;

    while(!q.empty())
    {
        a=q.front();// pop s from queue
        q.pop();// pop s from queue
        for(i=0; i<adj[a].size(); i++)
        {
            b=adj[a][i];
            if(!visited[b]) //when the node is not visited before
            {
                q.push(b); //insert in queue
                visited[b]=1;
                dis[b]=dis[a]+1;
            }
        }
    }

    cout<<"distance from source : \n";
    for(i=0;i<=node;i++)
      cout<<i<<"->"<<dis[i]<<endl;

      return 0;


}
