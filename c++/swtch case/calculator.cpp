#include<iostream>
using namespace std;
int main()
{
    char op;
    float a,b,result;
   cout<< "enter the value : ";
   cin >> a >> op >> b;
    switch(op)
    {
        case'+':
        result=a+b;
        cout<< result;
        break;
        case'-':
        result=a-b;
        cout<< result;
        break;
        case'*':
        result=a*b;
        cout<< result;
        break;
        case'/':
        result=a/b;
        cout<< result;
        break;
        default:
        cout<<"invalid operator";
        break;
    }
    return 0;
}


