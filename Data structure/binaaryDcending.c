#include<stdio.h>
int main()
{
    int beg,end,mid,data[100],n,item,loc=-1,i;
    printf("enter no of element :");
    scanf("%d",&n);
    printf("enter the elements : ");
    for(i=0;i<n;i++)
    {
        scanf("%d",&data[i]);

    }
    printf("enter the item for search: ");
    scanf("%d",&item);
    beg=0;
    end=n-1;
    mid=(beg+end)/2;
    while(beg>=end &&data[mid]!=item)
    {
        if(item<data[mid])
        {end=mid-1;
        }
        else
       {
        beg=mid+1;
       }
       mid=(beg+end)/2;
    }

 if(data[mid]==item)
 {
     loc=mid;
     printf("prsent");
 }
 else
 {loc=-1;
 printf("null");
 }
   return 0;
}
