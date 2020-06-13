#include<stdio.h>
int main()
{
    int arr[3][3],arr1[3][3],i,j;
    printf("enter matrix 1 : ");
    for(i=0;i<2;i++)
    for(j=0;j<2;j++)
    scanf("%d",&arr[i][j]);

    printf("enter matrix 2 : ");
    for(i=0;i<2;i++)
    for(j=0;j<2;j++)
    scanf("%d",&arr1[i][j]);

    for(i=0;i<2;i++)
   {
       for(j=0;j<2;j++)
    printf("%d ",((arr[i][j])+(arr1[i][j])));
    printf("\n");
   }
    return 0;

}
