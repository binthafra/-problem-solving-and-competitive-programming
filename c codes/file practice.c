#include<stdio.h>

int main()
{
    FILE *fpt;
    char c;
    fpt=fopen("iiuc7.dat","a");
    do
    {
        putc((c=getchar()),fpt);
    } while(c!='\n');
    fclose(fpt);

    fpt=fopen("iiuc7.dat","r");
    if(fpt==NULL)
    printf("Can not open the designated file!\n");
    else
    do
    {
        putchar(c=getc(fpt));
    } while(c!=EOF);

    fclose(fpt);
    return 0;

}
