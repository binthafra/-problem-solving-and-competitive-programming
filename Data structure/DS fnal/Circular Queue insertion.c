#include<stdio.h>
int main()
{
    int i,n,front=0,rare=0,item;
    char a[6];
    n=3;
    for(i=0;i<10;i++)
    {
        printf("enter item : ");
        scanf("%d",&item);

        if(front==1&& rare==n ||front==rare+1)
        {
            printf("Overflow");
            return 0;
        }
        if(front=='\0')
        {
            front=1;
            rare=1;
        }
        else if(rare==n)
        rare=1;
        else
        rare=rare+1;

        a[rare]=item;

        printf("Rare =%d Front=%d \n",rare,front);
    }
    return 0;
}
