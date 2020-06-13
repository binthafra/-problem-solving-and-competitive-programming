#include<stdio.h>
int main()
{
    int a,b,c;
    scanf("%d%d%d",&a,&b,&c);
    if(a>b && a>c)
    {
        printf("%d is 1st highest\n",a);
        if(b>c)
        printf("%d is 2nd highest\n%d is 3rd highest",b,c);
        else
        printf("%d is 2nd highest\n%d is 3rd highest",c,b);
    }
     if(b>a && b>c)
    {
        printf("%d is 1st highest\n",b);
        if(a>c)
        printf("%d is 2nd highest\n%d is 3rd highest",a,c);
        else
        printf("%d is 2nd highest\n%d is 3rd highest",c,a);
    }

     if(c>a && c>b)
    {
        printf("%d is 1st highest\n",c);
        if(a>b)
        printf("%d is 2nd highest\n%d is 3rd highest",a,b);
        else
        printf("%d is 2nd highest\n%d is 3rd highest",b,a);
    }
    return 0;
}
