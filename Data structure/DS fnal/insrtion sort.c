#include<stdio.h>
int main()
{  int arr[100],k,ptr,temp,n;
    printf("enter number of elements : ");
    scanf("%d",&n);
    printf("Enter %d integers\n :", n);
    for (k=1; k<=n; k++)
    {
        scanf("%d", &arr[k]);
    }
    arr[0]=-9999999;
    for(k=2; k<=n; k++)
    {
        temp=arr[k];
        ptr=k-1;
        while(temp<arr[ptr])
        {
            arr[ptr+1]=arr[ptr];
            ptr--;
        }
        arr[ptr+1]=temp;
    }
    for(k=1; k<=n; k++)
    {
        printf("%d\n",arr[k]);
    }
    return 0;
}
