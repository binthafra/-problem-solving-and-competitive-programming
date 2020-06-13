#include <stdio.h>

void Hanoi(int n, char a, char b, char c);
int i=0;
void main()
{
    int n;
    char a='A',b='B',c='C';
    printf("Enter Disk Number:  ");
    scanf("%d",&n);
    Hanoi(n,a,b,c);
    printf("\nMovement Number: %d",i);
}

void Hanoi(int n, char a, char b, char c)
{
    if(n!=0)
    {
        Hanoi(n-1,a,c,b);
        i=i+1;
        printf("\n Move the disk %d From %c->%c ",n,a,c);
        Hanoi(n-1,b,a,c);
    }
}
