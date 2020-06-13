#include<stdio.h>
int main()
{
    int n,m,i,temp,j,c,max;
    while(scanf("%d %d",&n,&m)==2)
    {
        max=0;
        printf("%d %d",n,m);
        if(n>m)
        {
            temp=m;
            m=n;
            n=temp;
        }
        for(i=n; i<=m; i++)
        {
            c=1;
            j=i;
            while(j!= 1)
            {
                if(j % 2==0)
                    j = j/2;
                else
                    j = (3*j)+1;
                c++;
            }
            if(max<c)
                max=c;
        }
        printf(" %d\n",max);
    }
    return 0;
}
