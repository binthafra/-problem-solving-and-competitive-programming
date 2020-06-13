#include<stdio.h>
int main()
{
    int m,n,c,o,j,ans,sum;
    while(scanf("%lld%lld",&n,&m)==2)
    {

        sum=0;
        printf("%lld %lld ",n,m);
        if(n>m)
        {
            o=m;
            m=n;
            n=o;
        }
        for(j=n; j<=m; i++)
        {
            ans=1;
            while()
            {
                if(j%2==0)
                    j=j/2;
                else
                    j=3*j+1;
                ans=ans+1;
            }
            if(ans>=sum)
                sum=ans;
        }
        printf("%d\n",sum);
    }
    return 0;
}
