#include<stdio.h>
#include <stdlib.h>
int main()
{
    int arr[100],pos,c,n;

    printf("enter number of elements in array\n");
    scanf("%d",&n);

    printf("Enter %d elments\n",n);
    for(c=0; c<n; c++)
        scanf("%d",&arr[c]);

    printf("Enter loccation where you wish to delete : ");
    scanf("%d",&pos);

    if(pos>=n+1)
        printf("deleteion not possible.");
    else
    {
        for(c=pos-1; c<n-1; c++)
            arr[c]=arr[c+1];

        printf("Resultant array");

        for(c=0; c<n; c++)
            printf("%d\n",arr[c]);
    }
    return 0;
}
