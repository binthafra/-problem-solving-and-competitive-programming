#include<stdio.h>
int main()
{
    int i,n,j,p=0;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        for(j=1;j<=i+1;j++)
           {
               p++;
            printf("%d ",p*p);
           }

        printf("\n");
     }
}

