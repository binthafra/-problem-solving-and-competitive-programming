#include<iostream>
#include<cstring>
using namespace std;
class card
{
    char name[50];
    char address[50];
    public:
    void store();
    void display();
};
 void card::store()
    {
        cin>>name>>"\n";
        cin>>address>>"\n";

    }
void card:: display()
    {
        cout<<name;
        cout<<address;
    }
int main()
{
    card ob;
    ob.store(name,address);
    ob.display();

    return 0;
}
