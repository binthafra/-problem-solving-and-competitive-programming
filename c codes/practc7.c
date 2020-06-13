#include<stdio.h>
int gcd(int x,int y);
int main()
{
    int n1,n2,hcf,lcm;
    scanf("%d%d",&n1,&n2);
    hcf=gcd(n1,n2);
    printf("GCD : %d\n",hcf);
    lcm=(n1*n2)/hcf;
    printf("LCM : %d",lcm);

    return 0;
}
int gcd(int x,int y)
{
    if(y==0)
    {
        return x;
    }
    else
    {
        return gcd(y,x%y);
    }
}

