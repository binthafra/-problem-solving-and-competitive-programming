#include<stdio.h>
#include<stdio.h>
int main()
{
    int a,s=0,n;
    printf("enter a number to reverse : ");
    scanf("%d",&n);
    while(n!=0)
    {
        a=n%10;
        n=n/10;
        s=s*10+a;
    }
    printf("%d ",s);
    return 0;
}


