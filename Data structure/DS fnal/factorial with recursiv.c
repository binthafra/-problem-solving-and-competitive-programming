#include <stdio.h>
 Factorial(int n)
{
    if(n==0||n==1)
        return 1;
    else
        return(n*Factorial(n-1));
}
int main()
{
    int fact;
    int n;
    printf("\n Enter the value of n:");
    scanf("%d",&n);
    fact=Factorial(n);
    printf("\nFactorial of %d!=%d",n,fact);
}
