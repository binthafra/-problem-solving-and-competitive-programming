#include<stdio.h>
int main()
{  int arr[100],j,i,key,n;
    printf("enter number of elements : ");
    scanf("%d",&n);
    printf("Enter %d integers\n :", n);
    for (j=1; j<=n; j++)
    {
        scanf("%d", &arr[j]);
    }
    for(j=2; j<=n; j++)
    {
        key=arr[j];
        i=j-1;
        while(i>0 && arr[i]<key)
        {
            arr[i+1]=arr[i];
            i--;
        }
          arr[i+1]=key;
    }
    for(j=n; j>=1; j--)
    {
        printf("%d\n",arr[j]);
    }
    return 0;
}
