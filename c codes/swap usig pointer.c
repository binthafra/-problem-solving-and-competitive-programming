#include<stdio.h>
int main()
{
    int a,b,*c,*d,temp;
    scanf("%d %d",&a,&b);
    c=&a;
    d=&b;

    temp=*c;
    *c=*d;
    *d=temp;

    printf("%d %d",*c,*d);
    return 0;

}
