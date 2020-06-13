#include<iostream>
using namespace std;
class date
{
    int month ,day,year;
    public:
    void getdate(int a,int b,int c)
    {
        month =a;
        day=b;
        year=c;
    }
    void showdata()
    {
        cout<<month<<"/"<<day<<"/"<<year;
    }
};
int main()
{
   date ob;
   int x,y,z;
   cin>>x>>y>>z;
   ob.getdate(x,y,z);
   ob.showdata();
   return 0;

}
