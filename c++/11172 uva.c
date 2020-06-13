#include<stdio.h>
int main()
{
int t,b,c,i;
while(scanf("%d",&t)==1)
{
for(i=0;i<t;i++)
    {
    scanf("%d%d",&b,&c);
    if(b>c)
    printf(">\n");
    else if(b<c)
    printf("<\n");
    else
    printf("=\n");
    }
}
return 0;
}
