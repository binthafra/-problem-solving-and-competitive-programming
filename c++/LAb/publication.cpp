#include<iostream>
using namespace std;
class publication{

public:
string title;
float price;
};
class book:public publication
{
    public:
    int page_count;
    book(string b,float a, int c)
    {
        price=a;
        title=b;
        page_count=c;

    }
    void putdata()
    {
        cout<<"title="<<title<<"\nprice ="<<price<<"\npage_count ="<<page_count<<"\n";
    }
};
class tape:public publication
{
    public:
    float playing_time;
    tape(string b,float a,float pt)
    {
        price=a;
        title=b;
        playing_time=pt;
    }
    void putdata()
    {
        cout <<"title ="<<title<<"\nprice ="<<price<<"\n"<<"playin time="<<playing_time<<"\n";
    }
};
int main()
{
    cout<<"input title price and page count"<<"\n";
    string t;float p;
    int pg;
    cin>>t>>p>>pg;
    book b(t,p,pg);
    b.putdata();
    cout<<"\nintput title price and playing time"<<"\n";
    string x;float y;int z;
    cin>>x>>y>>z;
    tape ta(x,y,z);
    ta.putdata();

    return 0;
}
