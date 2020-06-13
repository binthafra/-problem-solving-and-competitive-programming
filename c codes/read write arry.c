#include<stdio.h>
int main()
{   int arr[30],i,num;
    printf("enter the number of element : ");
    scanf("%d",&num);

    printf("enter the values : ");
    for(i=0;i<num;i++)
      {
        scanf("%d",&arr[i]);
      }
      for(i=0;i<num;i++)
      {
        printf("%d ",arr[i]);
      }
return 0;
}
