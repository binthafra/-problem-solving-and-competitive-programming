#include<stdio.h>
#include<string.h>
int main()
{
    char ch[100];
    int i,n,len;
    gets(ch);
    len=strlen(ch);
    for(i=len-1;i>=0;i--)
    {
        printf("%c",ch[i]);
    }
    return 0;
}
