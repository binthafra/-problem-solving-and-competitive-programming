#include<stdio.h>
int main()
{
    int arr[10],position,c,num;
    printf("enter number of element :");
    scanf("%d",&num);

    printf("enter the elements in array\n");
    for(c=0;c<num;c++)
       scanf("%d",&arr[c]);

    printf("enter the position where you to delete element :");
    scanf("%d",&position);

    if(position>=num+1)
       printf("deletion not possible\n");
    else
      {
        for(c=position-1;c<num-1;c++)
        arr[c]=arr[c+1];


        printf("resultant array is \n");
        for(c=0;c<num-1;c++)
             printf("%d\n",arr[c]);
      }
         return 0;
}
