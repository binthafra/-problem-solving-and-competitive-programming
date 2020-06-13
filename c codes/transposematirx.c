#include<stdio.h>
int main()
{
    int arr[3][3],i,j;

    for(i=0;i<2;i++)
     {for(j=0;j<2;j++)
    {
        scanf("%d",&arr[i][j]);
     }
     }
     printf("transpose matrix\n");
    for(j=0;j<2;j++)
    {
        for(i=0;i<2;i++)
   {
    printf("%d ",arr[i][j]);
    }printf("\n");

    }
   return 0;
}
