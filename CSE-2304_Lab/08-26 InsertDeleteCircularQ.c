//nazmus007
//Ghorar dim!!

#include <stdio.h>
#include<stdlib.h>
#define SIZE 5
void Qinsert(int);
void Qdelete();
int Q[SIZE];
int f=-1,r=-1;
void main()
{
    int choice,i,num;
    while(1)
    {
        printf("\n\n_____OPTIONS_____\n  1. Insert\n  2. Delete\n  3. Exit");
        printf("\n\n\nPlease Enter Your Choice : ");
        scanf("%d",&choice);
        switch(choice)
        {
        case 1:
            printf("\n\n Enter The Element : ");
            scanf("%d",&num);
            Qinsert(num);
            break;
        case 2:
            Qdelete();
            break;
        case 3:
            exit(0);
        default:
            printf("\n\n Your Choice IS Not Valid . ");
        }
    }
}

void Qinsert(int item)
{
    if ((f == r + 1) || (f == 0 && r == SIZE - 1))
    {
        printf("\n\n Overflow");
    }
    else
    {
        if (f == -1)
            f = r = 0;
        else
            r = (r + 1) % SIZE;
        Q[r] = item;

        printf("\n\n Front = %d    Rear = %d ",f,r);
    }
}
void Qdelete()
{
    int elem;
    if(f == -1)
    {
        printf("\n\n Underflow");
    }
    else
    {
    elem=Q[f];
    if(f==r)
        f=r=-1;
    else
        f= (f+1)%SIZE;
    printf("\n\n Deleted Element is : %d ",elem);
    printf("\n\n Front = %d    Rear = %d ",f,r);

    }
}

//Circular Queue via Array
