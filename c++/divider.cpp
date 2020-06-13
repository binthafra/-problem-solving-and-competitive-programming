#include <iostream>
using namespace std;
int main()
{
    int divider,dividend,quotient,remainder;

    cout << "enter a dividend & divider : ";
    cin >> dividend >> divider;

    quotient = dividend/divider;
    remainder= dividend % divider;

    cout << "quotient = " << quotient;
    cout << "\nremainder = " << remainder;

    return 0;



    return 0;
}
