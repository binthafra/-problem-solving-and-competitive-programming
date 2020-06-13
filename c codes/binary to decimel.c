#include <stdio.h>
#include<math.h>
int main()
{
    int b=0,r,c=0,binary;
    printf("enter a binary number : ");
    scanf("%d",&binary);
    while(binary!=0)
    {
        r=binary%10;
        b=b+(r*pow(2,c));
        binary=binary/10;
        c++;
    }
    printf("equvalent decimel number = %d",b);

    return 0;
}
