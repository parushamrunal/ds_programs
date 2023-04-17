#include <stdio.h>
#include <stdlib.h>
struct node {
    int data;          
    struct node *next;  
}*head;
int createList(int n);
int insertNodeAtBeginning(int data);
int displayList();
int main()
{
    int n, data;
    printf("Enter number of nodes:");
    scanf("%d", &n);
    createList(n);
    printf("Data in the list \n");
    displayList();
    printf("Enter data to insert at beginning of the list: ");
    scanf("%d", &data);
    insertNodeAtBeginning(data);
    printf("Data in the list \n");
    displayList();
    return 0;
}
int createList(int n)
{
    struct node *newNode, *temp;
    int data, i;
    head = (struct node *)malloc(sizeof(struct node));
    if(head == NULL)
    {
        printf("Unable to allocate memory");
    }
    else
    {
        printf("Enter the data of node 1: ");
        scanf("%d", &data);
        head->data = data;
        head->next = NULL;
        temp = head;
        for(i=2; i<=n; i++)
        {
            newNode = (struct node *)malloc(sizeof(struct node));
            if(newNode == NULL)
            {
                printf("Unable to allocate memory");
                break;
            }
            else
            {
                printf("Enter the data of node %d: ", i);
                scanf("%d", &data);
                newNode->data = data; 
                newNode->next = NULL; 
                temp->next = newNode; 
                temp = temp->next; 
            }
        }
    }
    return 0;
}
int insertNodeAtBeginning(int data)
{
    struct node *newNode;
    newNode = (struct node*)malloc(sizeof(struct node));
    if(newNode == NULL)
    {
        printf("Unable to allocate memory");
    }
    else
    {
        newNode->data = data;
        newNode->next = head;
        head = newNode;
    }
    return 0;
}
int displayList()
{
    struct node *temp;
    if(head == NULL)
    {
        printf("empty");
    }
    else
    {
        temp = head;
        while(temp != NULL)
        {
            printf("Data = %d\n", temp->data);
            temp = temp->next;
        }
    }
    return 0;
}
