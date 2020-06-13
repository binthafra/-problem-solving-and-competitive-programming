#include<iostream>
#include<cstring>
using namespace std;
class card
{
    char name[50];
    char address[50];
    public:
    void store(char *n,char *a)
    {
        strcpy(name,n);
        strcpy(address,a);
    }
    void display()
    {
        cout<<name;
        cout<<address;
    }
};
int main()
{
    card ob;
    ob.store("afra\n","kumir\n");
    ob.display();

    return 0;
}
