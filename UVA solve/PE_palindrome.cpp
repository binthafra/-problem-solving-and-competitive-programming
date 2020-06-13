#include<stdio.h>
#include<string.h>
int main()
{
    char arr[30];
    int i,len,m=0,h;
    gets(arr);
    len=strlen(arr);
    h=len-1;
    while(h>m)
   {{
        if(arr[m++]!=arr[h--])
       {
           printf("palindrome");
        return 0;
       }
        printf("not palindrome");
      return 0;
}
gets(arr);
}
}

