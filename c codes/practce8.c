#include<stdio.h>
#include<stdio.h>
int main()
{
    int r,b=0,c=0,n;
    printf("enter a binary number : ");
    scanf("%d",&n);
    while(n!=0)
    {
        r=n%10;
        b=b+r*(pow(2,c));
        n=n/10;
        c++;
    }
    printf("equvalent decimel : %d ",b);
    return 0;
}

