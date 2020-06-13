//Delete from Link list
#include<stdlib.h>
#include<stdio.h>
struct node
{
    int data;
    struct node * next;
};
typedef struct node item;
void main()
{
    item * temp, * head, *temp1, * old_temp;
    int i,n,node_n, choice, num;
    head = NULL;
    printf(" How many number of node be created ? ");
    scanf("%d",&n);
    for(i=1; i<=n; i++)
    {
        temp = (item *)malloc(sizeof(item));
        temp->data = i;
        temp->next  = head;
        head = temp;
    }
    temp = head;
    while(temp)
    {
        printf(" %d\n", temp->data);
        temp = temp->next ;
    }
    while(1)
    {
        printf("\n\n Main Menu\n 1.Delete From First\n 2.Delete From Last \n 3.Delete a Given Node\n 4.Exit");
        printf("\n\n Enter Your Choice ? ");
        scanf("%d",&choice);
        switch(choice)
        {
        case 1:
            temp = (item*)malloc(sizeof(item));
            temp = head;
            head = temp->next;
            free(temp);
            printf(" After Deletion From Front\n");
            temp = head;
            while(temp)
            {
                printf(" %d\n", temp->data);
                temp = temp->next ;
            }
            break;
        case 2:
            temp1 = (item*)malloc(sizeof(item));
            temp1 = head;
            old_temp = (item*)malloc(sizeof(item));

            while(temp1->next!=NULL)
            {
                old_temp = temp1;
                temp1 = temp1->next;
            }
            old_temp->next = NULL;
            free(temp1);
            printf(" After Deletion From Back\n");
            temp = head;
            while(temp)
            {
                printf(" %d\n", temp->data);
                temp = temp->next ;
            }
            break;
        case 3:
            temp1 = (item*)malloc(sizeof(item));
            temp1 = head;
            old_temp = (item*)malloc(sizeof(item));
            old_temp = temp1;
            printf(" Enter the node number ? ");
            scanf("%d",&node_n);
            if(node_n==1)
            {
                temp = (item*)malloc(sizeof(item));
                temp = head;
                head = temp->next;
                free(temp);
            }
            else
            {
                for( i = 1 ; i < node_n; i++ )
                {
                    old_temp = temp1;
                    temp1 = temp1->next;
                }
                old_temp->next = temp1->next;
                free(temp1);
            }
            printf(" After Deletion the given node\n");
            temp = head;
            while(temp)
            {
                printf(" %d\n", temp->data);
                temp = temp->next ;
            }
            break;
        case 4:
            exit(0);
        default:
            printf("\n\n Invalid Choice . ");
        }
    }
}
