#include <stdio.h>
#include <string.h>
main()
{
    char s1[20], s2[20];
    printf("\nEnter string1: ");
    gets(s1);
    printf("\nEnter string2: ");
    gets(s2);

    strcat(s1, s2);
    printf("\nconcatenated string: %s", s1);
    getch();
}
