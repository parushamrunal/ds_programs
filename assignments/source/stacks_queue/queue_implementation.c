#include<stdio.h>
#include<stdlib.h>
int enqueue(int queue[],int*,int*);
int dequeue(int queue[],int*,int*);
int display(int queue[],int*,int*);
#define SIZE 6
int main(void)
{
    int queue[SIZE],*front,*rear;
    int choice,f=-1,r=-1;
    front=&f,rear=&r;
    while(1)
    {
        printf("\n1.enqueue\n2.dequeue\n3.dispaly\n4.exit\n");
        printf("enter your choice:\n");
        scanf("%d",&choice);
        switch(choice)
        {
            case 1:*rear = enqueue(queue,front,rear);break;
            case 2:*front = dequeue(queue,front,rear);break;
            case 3: display(queue,front,rear);break;
            case 4:exit(1);
        }
    }
}
int enqueue(int queue[],int *front,int *rear)
{
    int x;
    if(*rear==SIZE-1)
    {
        printf("overflow\n");
    }
    else{
        if(*front==-1)
        {
            *front=0;
        }
    printf("enter element to be insert:\n");
    scanf("%d",&x);
    *rear=*rear+1;
     queue[*rear]=x;
    }
return *rear;
}
int dequeue(int queue[],int *front,int *rear)
{
    if((*front==-1)||(*front>*rear))
    {
        printf("underflow\n");
    }
    else{
    printf("deleted element:%d\n",queue[*front]);
    *front=*front+1;
    }
return *front;
}
int display(int queue[],int *front,int *rear)
{
    if(*front==-1)
    {
        printf("empty queue\n");
    }
    else{
        for(int i=*front;i<=*rear;i++)
        {
            printf("%d\t",queue[i]);
        }
    }
return 0;
}
