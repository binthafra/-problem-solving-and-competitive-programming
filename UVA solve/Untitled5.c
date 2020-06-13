#include<stdio.h>
int main()
{
 long long  a,b;
 while (scanf("%lld %lld",&a, &b)==2)
 {
  if (a>b)
   printf("%lldn",a-b);
  else
   printf("%lldn",b-a);
 }
 return 0;
}
