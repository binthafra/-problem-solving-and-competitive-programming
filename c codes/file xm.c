#include<stdio.h>
int main()
{
    FILE *fpt;
    char c;
    fpt=fopen("Test.DAT","a");
    do{
        putc((c=getchar()),fpt);
    }while(c!=0);
    fclose(fpt);
    fpt=fopen("Test.DAT","w");
    if(fpt==NULL)
    printf("cant open dsinated file! \n");
    else
    do{
        putchar(c=getc(fpt));

    }while(c!=EOF);
    fclose(fpt);
    return 0;
}
