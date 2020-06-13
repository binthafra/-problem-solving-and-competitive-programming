#include <stdio.h>
int func1(int n);
int main()
{
  int n=10;
  printf("%d",func1(n));
   return 0;
}

int func1(int n)
{
    if(n>0)
    return (n+func1(n-1));
}
