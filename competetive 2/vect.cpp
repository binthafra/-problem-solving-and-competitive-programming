#include<bits/stdc++.h>
using namespace std;

int main()
{
    vector <int> v;
    cout<<v.size()<<endl;
    v.push_back(33);
    v.push_back(16);
    v.push_back(40);
    v.push_back(68);
    v.push_back(89);
    cout<<v.size()<<endl;
    cout<<"printing vector"<<endl;
    for(int i=0; i<v.size() ; i++)
        cout<<v[i]<<endl;
        //Insertion
    v.insert(v.begin()+2,-99);
    cout<<"after insertion"<<endl;
    for(int i=0; i<v.size() ; i++)
        cout<<v[i]<<endl;
    //deletetion
      v.erase(v.begin()+3,v.begin()+5);
    cout<<"after deletetion"<<endl;
    for(int i=0; i<v.size() ; i++)
        cout<<v[i]<<endl;
    return 0;
}
