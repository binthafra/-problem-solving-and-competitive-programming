#include<stdio.h>
int main()
{
    char c[100];
    int i,l,position,length;
    printf("enter a text:");
    gets(c);
    l=strlen(c);
    printf("Enter position and length :");
    scanf("%d%d",&position,&length);
    if(position+length-1>l)
    {
        printf("Deletion not possible!");
    }
    for(i=position+length-1; i<=l; i++)
    {
        c[i-length]=c[i];
    }
      printf("%s",c);

    return 0;
}

