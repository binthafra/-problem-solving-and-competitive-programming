#include<iostream>
#include<cstring>
using namespace std;
class card
{

    char title[50];
    char author[50];
    int Noc;
    public:
    void store(char *t,char *a,int q)
    {
        strcpy(title,t);
        strcpy(author,a);
        Noc=q;
    }
    void show()
    {
        cout<<"Title : " <<title<<"\n";
        cout<<"Author : "<<author<<"\n";
        cout<<"Number of copies : "<<Noc;
    }
};
int main()
{
    card ob;
    ob.store("c++","H.schildt",100);
    ob.show();
    return 0;
}
