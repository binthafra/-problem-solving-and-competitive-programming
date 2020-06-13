#include<stdio.h>
MIN(int a[],int k,int n,int loc)
{   int min,j;
    min=a[k];
    loc=k;
    for(j=k+1; j<=n; j++)
    {
        if(min>a[j])
        {
            min=a[j];
            loc=a[j];
            loc=j;
        }
    }
    return loc;
}
int main()
{
    int arr[100],k,n,loc,temp;
    printf("enter number of elements : ");
    scanf("%d",&n);
    printf("Enter %d integers\n :", n);
    for (k=1; k<=n; k++)
    {
        scanf("%d", &arr[k]);
    }
    for(k=1; k<=n-1; k++)
    {   loc=MIN(arr,k,n,loc);
        temp=arr[k];
        arr[k]=arr[loc];
        arr[loc]=temp;
    }
    for(k=1; k<=n; k++)
    {
        printf("%d\n",arr[k]);
    }
    return 0;
}

