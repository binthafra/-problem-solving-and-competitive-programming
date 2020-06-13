#include <stdio.h>
int main()
{
    int deci,b=0,r,base=1;
    printf("enter a deci number :");
    scanf("%d",&deci);
    while(deci!=0)
    {
        r=deci%2;
        b=b+r*base;
        base=base*10;
        deci=deci/2;

    }
    printf("equvalent binary number=%d",b);

    return 0;
}
