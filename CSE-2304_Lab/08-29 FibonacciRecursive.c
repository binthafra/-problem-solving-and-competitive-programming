#include <stdio.h>
Fibonacci(int n)
{
    if(n==0||n==1)
        return n;
    else
        return(Fibonacci(n-2)+Fibonacci(n-1));
}
int main()
{
    int fibo;
    int n,i;
    printf("\nEnter the value of n : ");
    scanf("%d",&n);
    for(i=0;i<=n;i++)
    {
     fibo=Fibonacci(i);
     printf(" %d ",fibo);
    }
}
