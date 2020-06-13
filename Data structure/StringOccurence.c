#include<stdio.h>
#include<string.h>
int main()
{
    char str[100];
    int c=0,p[26],x;
    gets(str);
    len=strlen(str);
    for(i=0;i<26;i++)
    {
        str[i]=0;
    }
    for(i=0;i<26;i++)
    {
        if(str[c]>='a' && str[c]<='z')
        {
            x=str[c]-'a';
            p[x]++;
        }
        else if(str[c]>='A' && str[c]<='Z')
        {
            x=str[c]-'A';
            p[x]++;
        }

        c++;

    }
    for(c=0; c<26; c++)
    {
        if(p[c]!=0)
        {
         printf("%c occurs %d times in the string.\n",c+'a',p[c]);
        }
    }
return 0;
}
