//Insertation in LinkedList
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
    item * temp, * head, *temp1;
    int i,n,node_n, choice, num;

    head = NULL;
    printf("Node Number: \n");
    scanf("%d",&n);
    for(i=1; i<=n; i++)
    {
        temp = (item *)malloc(sizeof(item));
        temp->data = i;
        temp->next  = head;
        head = temp;
    }

    printf("Linked List Before Insertion\n");
    temp = head;
            while(temp)
            {
                printf("%d\n", temp->data);
                temp = temp->next ;
            }
    while(1)
    {
        printf("\n\n Main Menu\n1.Insert last\n2.Insert After a Given Node\n3.Display The List\n4.Exit");
        printf("\n\n Enter Your Choice : ");
        scanf("%d",&choice);
        switch(choice)
        {
        case 1:
            printf("\n\n Enter The Data : ");
            scanf("%d",&num);
            temp1 = (item *)malloc(sizeof(item));
            temp1=head;
            while(temp1->next!=NULL)
                temp1 = temp1->next;
            temp = (item*)malloc(sizeof(item));
            temp->data = num;
            temp->next = NULL;
            temp1->next = temp;
            break;
        case 2:
            printf("\n\n Enter The Data : ");
            scanf("%d",&num);
            printf("Enter the node number");
            scanf("%d",&node_n);
            temp1 = (item*)malloc(sizeof(item));
            temp1 = head;
            for( i = 1 ; i < node_n; i++ )
            {
                temp1 = temp1->next;

                if( temp1 == NULL )
                {
                    printf("Node %d is not exist",node_n);
                    break;
                }
            }
            temp = (item*)malloc(sizeof(item));
            temp->data = num;
            temp->next = temp1->next;
            temp1->next = temp;
            break;
        case 3:
            printf("Linked List After Insertion");
            temp = head;
            while(temp)
            {
                printf("%d\n", temp->data);
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
