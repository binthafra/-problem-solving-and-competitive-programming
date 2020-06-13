#include <iostream>
using namespce std;
int main()
{
    class myclss
    {
        int i;
        public:
        myclas(int n);  //constructor
        ~myclass();   //destructr
        void set_i(int n)
        {  i=n;  }
        int get_i()
        {  return i;  }
    };
    myclass ::myclass(int n)
    {
        i=n;
        cout<<"costructing"<<i<<"\n";
    }
    myclass::~myclas()
    {
        cout<<"destructing"<<i<<"\n";
    }
    void f(myclass ob)
    {
        ob.set_(2);
        cout<<"ths is local i:"<<o.get_i()
        cout<"\n";
    }
    int main()
    {
        myclass o(1);
        f(o);
        cout<<"this is i in main : ";
        cout<<o.get_i()<<"\n";
        return 0;
    }
}
