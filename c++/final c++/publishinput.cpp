#include<iostream>
using namespace std;
class publication
{

public:

    string title;
    float price;
};
class book:public publication
{
public:
    int page_count;
   void getdata()
   {
       cout<<"input title, price and page_count"<<"\n";
       cin>>title>>price>>page_count;
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
   void getdata()
   {
       cout<<"input title,price and plying_time"<<"\n";
       cin>>title>>price>>playing_time;
   }
    void putdata()
    {
        cout <<"title ="<<title<<"\nprice ="<<price<<"\n"<<"playin time="<<playing_time<<"\n";
    }
};
int main()
{
    book b;
    b.getdata();
    b.putdata();

    tape ta;
    ta.getdata();
    ta.putdata();

return 0;

    return 0;
}
