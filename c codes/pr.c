#include<stdio.h>
int main()
{
    int arr[30],i,n,element,location;
    printf("enter the no of element in array :");
    scanf("%d",&n);

    printf("enter the values :");
    for(i=0;i<n;i++)
    {scanf("%d",&arr[i]);
    }
    printf("enter the element to be inserted :");
    scanf("%d",&element);

    printf("enter the location where you insert element :");
    scanf("%d,&location");

    for(i=n;i>=location;i--)
    {
        arr[i]=arr[i-1];
    }
    n++;
    arr[location-1]=element;

    for(i=0;i<n;i++)
    printf("%d",arr[i]);

}
