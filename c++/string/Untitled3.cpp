#include<iostream>
#include<cstring>
using namespace std;
class card
{
    char name[50];
    char address[50];
    public:
    void store()
    {
        cin>>name;
        cin>>address;
    }
    void display()
    {
        cout<<name<<"\n";
        cout<<address;
    }
};
int main()
{
    card ob;
    ob.store();
    ob.display();

    return 0;
}
