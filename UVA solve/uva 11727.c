#include<stdio.h>
int main()
{
   long long int a,b,c,d,j;
   scanf("%lld",&d);
   if(d<20)
  {
    for(j=1;j<=d;j++)
     {
      scanf("%lld %lld %lld",&a,&b,&c);
      if((a>=1000 && a<=10000) && (b>=1000 && b<=10000) &&(c>=1000 && c<=10000)  )
     {
        if(a>b && a<c || a<b && a>c )
    printf("Case %lld: %lld\n",j,a);

         else if(b>a&& b<c || b<a && b>c)
    printf("Case %lld: %lld\n",j,b);

         else
     printf("Case %lld: %lld\n",j,c);
     }
    }
   }
return 0;
}
