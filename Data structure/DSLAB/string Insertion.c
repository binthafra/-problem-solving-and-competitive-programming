#include<stdio.h>
#include<string.h>
int main()
{
    int i,k,j,p,position,len1,len2,len3;
     char text[100],s[100],newstr[100];
    printf("Input the string\n");
    gets(text);
     printf("Input a new string\n");
    gets(s);
     printf("Provide the position where the new string to be inserted\n");
    scanf("%d",&position);
    len1=strlen(text);
    len2=strlen(s);
    len3=len1+len2;
    for(i=0;i<position-1;i++)
       newstr[i]=text[i];
    for(j=0;j<len2;j++)
        newstr[j+i]=s[j];
    for(k=position-1;k<len1;k++)
        newstr[k+j]=text[k];
    for(p=0;p<len3;p++)
        printf("%c",newstr[p]);

    return 0;
}
