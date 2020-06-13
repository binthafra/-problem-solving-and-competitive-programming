#include<stdio.h>
int main()
{
    int n,i,a[2000],sum=0,avrg,p=0,c=1;
    while(scanf("%d",&n)==1)
    {
        if(n==0)
        break;
        sum=0;
        p=0;
        for(i=0;i<n;i++)
        {
            scanf("%d",&a[i]);
        }
        for(i=0;i<n;i++)
        sum=sum+a[i];
        avrg=sum/n;
        for(i=0;i<n;i++)
        {
            if(a[i]>avrg)
            p=p+(a[i]-avrg);
        }
        printf("Set #%d\nThe minimum number of moves is %d\n",c,p);
        c++;
    }
    return 0;

}
