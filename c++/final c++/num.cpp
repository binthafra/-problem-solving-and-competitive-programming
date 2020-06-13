#include<bits/stdc++.h>
using namespace std;
class num{
    public:
    int i;
    num(int x)
    {
        i=x;
    }
    virtual void shownum()
    {
        cout<<i<<"\n";
    }
};
class outhex : public num
{
    public:
    outhex(int n):num(n){}
    void shownum()
    {
        cout<<hex<<i<<"\n";
    }
};
class outoct : public num
{
    public:
    outoct(int n):num(n){}
    void shownum()
    {
        cout<<hex<<i<<"\n";
    }
};
int main(){
outhex hex(5);
outoct oct(10);

hex.shownum();
oct.shownum();
return 0;
}
