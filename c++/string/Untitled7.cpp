#include<iostream>
using namespace std;
inline int even(int x)

    {
        return!(x%2);
    }
int main(){
int num;
cin>>num;
if(even(num))
cout <<num<<"is even \n";
else
cout <<num<<"is not even\n";
return 0;
}
