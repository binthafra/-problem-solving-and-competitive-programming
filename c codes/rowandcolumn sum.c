#include<stdio.h>
int main()
{
    int arr[3][3],i,j,sum=0;

    for(i=0;i<2;i++)
    for(j=0;j<2;j++)
    scanf("%d",&arr[i][j]);
     //for row sum
   for(i=0;i<2;i++)
   {
    for(j=0;j<2;j++)
    sum=sum+arr[i][j];
    printf("sum of %d row : %d\n ",i+1,sum);
     sum=0;
     }
     //for colum sum
     for(j=0;j<2;j++)
   {
    for(i=0;i<2;i++)
    sum=sum+arr[i][j];
    printf("sum of %d column : %d\n ",j+1,sum);
    sum=0;
     }
        return 0;
}
