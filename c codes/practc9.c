#include<stdio.h>
#include<stdio.h>
int main()
{
    int r,b=0,base=1,n;
    printf("enter a decimel number : ");
    scanf("%d",&n);
    while(n!=0)
    {
        r=n%2;
        b=b+r*base;
        base=base*10;
        n=n/2;
    }
    printf("equvalent binary : %d ",b);
    return 0;
}


