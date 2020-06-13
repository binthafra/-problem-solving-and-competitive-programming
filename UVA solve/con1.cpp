#include<stdio.h>
int main()
{
    int t,i,n,x,y,a;
    scanf("%d",&t);
    for(i=0; i<t; i++)
    {
        scanf("%d%d%d",&n,&x,&y);
        for ( a = 1; a < n; a++)
        {
            if (a % x == 0 && a % y != 0)
            {
                printf("%d ", a);
            }
        }
        	printf("\n");
    }
return 0;
       }
