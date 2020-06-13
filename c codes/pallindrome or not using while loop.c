#include<stdio.h>
int main()
{
    int n,temp,a=0;
    //enter number to check pallindrome or not
    scanf("%d",&n);
    temp=n;
    while(temp!=0)
    {
        a=a*10;
        a=a+temp%10;
        temp=temp/10;
        }
    if(n==a)
    printf("%d is pallindrome",n);
    else
    printf("%d is not pallindrome",n);

    return 0;
}
