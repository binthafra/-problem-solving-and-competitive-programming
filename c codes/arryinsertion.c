#include<stdio.h>
int main()
{   int arr[100],i,element,num,location;
    printf("enter the number of element : ");
    scanf("%d",&num);
    printf("enter the values : ");
    for(i=0;i<num;i++)
      {
        scanf("%d",&arr[i]);
      }
    printf("enter the location :");
    scanf("%d",&location);
    printf("enter the elemrnt to be inserted :");
    scanf("%d",&element);
    for(i=num-1;i>=location-1;i--)
      {
        arr[i+1]=arr[i];
      }

    arr[location-1]=element;
    //print the result of insertion
    for(i=0;i<=num;i++)
       printf("%d ",arr[i]);
return 0;
}
