#include<stdio.h>
#include<string.h>
int main()
{
    char ch[100],substring[100];
    int i,init,len;
    printf("Enter a string: ");
    gets(ch);
    printf("enter initial point and length: ");
    scanf("%d %d",&init,&len);
    for(i=init-1;i<init+len-1;i++)
    {
        substring[i]=ch[i];
        printf("%c",substring[i]);
    }
    return 0;

}
