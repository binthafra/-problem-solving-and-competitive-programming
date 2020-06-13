#include<stdio.h>
int main()
{
    char arr[30];
    int i,length,m=0,h;
    gets(arr);
    length=strlen(arr);
    h=length-1;
    while(h>m)
    {
        if(arr[m++]!= arr[h--])
        {
            printf("palindrome");
            return 0;
        }
        printf("not palindrome");
        return 0;}
}
