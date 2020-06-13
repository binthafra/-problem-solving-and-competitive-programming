#include<stdio.h>
#include<string.h>
int main ()
{
    char p[100],t[100];
    int k,max,l,s,r,index;
    printf("Enter a string for T: ");
    gets(t);
    s=strlen(t);
    printf("Enter a string for P: ");
    gets(p);
    r=strlen(p);
    k=1; max=s-r+1;
    while(k<=max)
    {
        for(l=1;l<r;l++)
        {
            if(p[l]!=t[k+l-1])
                break;
        }
        index=k;
        k++;
    } printf("%d",index);
    return 0;

}
