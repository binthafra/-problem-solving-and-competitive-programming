#include<stdio.h>
#include<string.h>
int main()
{
     int i,j,k,lenf,len1,len2;
    char sf[100],s1[100],s2[100];
    printf("Input the first string: \n");
    gets(s1);
    printf("Input the second string: \n");
    gets(s2);
    len1=strlen(s1);
    len2=strlen(s2);
    lenf=len1+len2;
    for(i=0;i<len1;i++)
    {
        sf[i]=s1[i];
    }
    for(j=0;j<len2;j++)
    {
        sf[j+len2]=s2[j];
    }
    for(k=0;k<lenf;k++)
    {
        printf("%c",sf[k]);
    }

    return 0;
}
