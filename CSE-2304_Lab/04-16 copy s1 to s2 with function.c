#include<stdio.h>
#include<string.h>

int main()
{
    char str1[100];
    char str2[100];

    printf("\nEnter the String 1 : ");
    gets(str1);

    strcpy(str2, str1);
    printf("\nString2 : %s", str2);
    getch();
    return (0);

}
