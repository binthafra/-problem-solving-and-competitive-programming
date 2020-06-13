#include<stdio.h>
int main()
{
    int i,n,j,p,temp;
    scanf("%d",&n);
    temp=n;
    p=1;
    for(i=1;i<=n;i++)
    {
        for(j=1;j<temp;j++)
           printf(" ");

         for(j=1;j<=2*i-1;j++)
           {
            printf("%d",p);
            p++;
            };
            temp--;
    printf("\n");
    }
    return 0;
}


