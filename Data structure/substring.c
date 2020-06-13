#include<stdio.h>
#include<string.h>
int main()
{
    char string[100],sub[100];
    int len,i,pos,init;
    printf("enter a string :");
    gets(string);
    printf("enter initializer and length: ");
    scanf("%d%d",&init,&len);
    for(i=init-1;i<init+len-1;i++)
    {
        sub[i]=string[i];
        printf("%c",sub[i]);
    }
    return 0;

}
