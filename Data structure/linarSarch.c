#include<stdio.h>
int main()
{
    int k,loc=0,n,data[100],item;
    scanf("%d",&n);
    for(k=0;k<n;k++)
    {
        scanf("%d",&data[k]);
    }

    scanf("%d",&item);
    k=0;
    while(loc==0 && k<=n)
    {
        if(item==data[k])
        {
            loc=k+1;
        }
    k++;
    }
    if(loc==0)
    {
        printf("%d item is not in the array",item);
    }
    else{
    printf("%d item is present in %d location",item,loc);
    }
    return 0;
}
