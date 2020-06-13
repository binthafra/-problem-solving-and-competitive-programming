
#include<stdio.h>
int main()
{
    int data[20],n,i,ptr,temp;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    scanf("%d",&data[i]);

    for(i=0;i<n-1;i++)
    {
        int ptr=0;
        while(ptr<n-i-1)
        {
        if(data[ptr]>data[ptr+1])
        {
            temp=data[ptr];
            data[ptr]=data[ptr+1];
            data[ptr+1]=temp;
        }
        ptr++;
    }
    }
    for(i=0;i<n;i++)
    printf("%d ",data[i]);

    return 0;
}
