#include<stdio.h>
#include<stdlib.h>
#define SIZE 7
int enqueue(int queue[],int *front,int *rear);
int dequeue(int queue[],int *front,int *rear);
int display(int queue[],int *front,int *rear);
int main(void)
{
    int queue[SIZE],*front,*rear;
    int choice,f=-1,r=-1;
    front=&f,rear=&r;
    while(1){
        printf("\n1.enqueue\n2.dequeue\n3.dispaly\n4.exit\n");
        printf("enter your choice:\n");
        scanf("%d",&choice);
        switch(choice)
        {
            case 1:
                *rear = enqueue(queue,front,rear);break;
            case 2:
                *front=dequeue(queue,front,rear);break;
            case 3:
                display(queue,front,rear);break;
            case 4:
                exit(1);
            default:
                printf("enter correct choice:\n");
        }
    }
}
int enqueue(int queue[],int *front,int *rear)
{
    if((*front==0)&&(*rear==SIZE-1))
    {
        printf("queue overflow\n");
    }
    else{
        if(*front==-1)
        {
        *front=0;
        }
    int x;
        printf("enter element to insert:\n");
        scanf("%d",&x);
        *rear=*rear+1;
        queue[*rear]=x;
    }
    return *rear;
}
int dequeue(int queue[],int *front,int *rear)
{
    int element;
    if((*front==-1)||(*front==*rear+1))
    {
    printf("queue underflow\n");
    }
    else{
        element=queue[*front];
        if(*front==*rear)
        {
            *front=-1;
            *rear=-1;
        }
        else{
            *front=*front+1;
        }
    }
return *front;
}
int display(int queue[],int *front,int *rear)
{
    if(*front==-1)
    {
        printf("underflow\n");
    }
    else if(*front==*rear+1){
        printf("empty stack\n");
    }
    else{
        for(int i=*front;i<=*rear;i++)
        {
            printf("%d\t",queue[i]);
        }
    }
return 0;
}
