#include<stdio.h>
int main()
{
    int k,loc,max,data[100],n;
    scanf("%d",&n);
    for(k=0;k<n;k++)
    {
        scanf("%d",&data[k]);
    }
    max=data[0];
    k=0;
    loc=0;
    while(k<n)
    {
        if(max<data[k])
        {
            loc=k;
            max=data[k];
        }
        k++;
    }
    printf("loc : %d\nmax : %d",loc+1,max);
    return 0;
}
