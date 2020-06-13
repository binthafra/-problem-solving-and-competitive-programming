//Program to sort n-numbers using Selection sort
#include <stdio.h>
void MIN(int k);

int A[11]= {0, 20,10,2,30,40,15,35,25,55,60},n=10,loc,M;
void main()
{
    int i,k,temp;
    for(k=0; k<=n-2; k++)
    {
        MIN(k);
        temp=A[k];
        A[k]=A[loc];
        A[loc]=temp;
    }

    for(i=0; i<=n; i++)
        printf(" %d ",A[i]);
}               //end of main

void MIN(k)
{
    int j;
    M=A[k];
    loc=k;
    for(j=k+1; j<=n; j++)
    {
        if(M>A[j])
        {
            M=A[j];
            loc=j;
        }
    }
}
