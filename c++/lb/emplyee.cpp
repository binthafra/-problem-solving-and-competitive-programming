#include<iostream>
#include<string>
using namespace std;
class emplyee
{
    long number;
    char name[50];
    public:
    void getdata();
    void putdata();
};
 void emplyee::getdata()
 {
     cout <<"enter emplyee no:"<<"\n";
     cin>>number;
     cout <<"enter emplyee name:"<<"\n";
     cin>>name;
 }
 void emplyee ::putdata()
 {
     cout <<"no:"<<number<<"\n";
     cout<<"name:"<<name<<"\n";
 }
 int main()
 {
     emplyee ob;
     ob.getdata();
     ob.putdata();
     return 0;n
 }
