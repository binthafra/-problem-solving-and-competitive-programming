/*
        c to f
 (c=((5.0/9.0)*(f-32));
        f to c
 f=(c*9.0)/5.0+32
*/
#include <iostream>
using namespace std;
int main()
{
    int f,c;
    cout << "enter celcius : ";
    cin  >> c;
    f=(c*1.8)+32;
    cout << "ferenhite = " << f;

    return 0;
}


