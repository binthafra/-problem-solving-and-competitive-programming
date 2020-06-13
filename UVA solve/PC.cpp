#include<stdio.h>
#include<string.h>
int main()
{
    char c[100],a;
    int i,l;
    while(scanf("%c",&c))
    {
        l=strlen(c);
        for(i=0;i<l;i++)
        {
            c[i]=c[i]-3;
        }
        printf("%c",c[i]);
    }
    return 0;
}
