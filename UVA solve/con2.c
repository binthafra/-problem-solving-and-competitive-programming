#include <stdio.h>
#include <math.h>
#define pi acos(-1.0)
void solve()
{
    double r1,r2,p,h;
    scanf("%lf %lf %lf %lf",&r1,&r2,&h,&p);

    r1=r2+((r1-r2)*p)/h;


    double volume=(pi*p*(r1*r1+r1*r2+r2*r2))/3.0;
    printf("%lf\n",volume);

}
int main()
{
    int test,kase=1;
    for(scanf("%d",&test); kase<=test; kase++)
    {
        printf("Case %d: ",kase);
        solve();
    }

}
