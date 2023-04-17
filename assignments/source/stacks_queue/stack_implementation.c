#include <stdio.h>
int push(int stack[],int i,int j,int choice,int n,int top);
int pop(int stack[],int i,int j,int choice,int n,int top);
int display(int stack[],int i,int j,int choice,int n,int top);
int main()
{
    int stack[100],i,j,choice=0,n,top=-1;
    printf("Enter no of elements in stack:");
    scanf("%d",&n);
    while(choice != 4)
    {
        printf("enter which operation we want:\n");
        printf("1.Push\n2.Pop\n3.Show\n4.Exit\n");
        printf("Enter your choice:");
        scanf("%d",&choice);
        switch(choice)
        {
            case 1:
            {
                top=push(stack,i,j,choice,n,top);
                break;
            }
            case 2:
            {
               top=pop(stack,i,j,choice,n,top);
                break;
            }
            case 3:
            {
                display(stack,i,j,choice,n,top);
                break;
            }
            case 4:
            {
                printf("Exiting");
                break;
            }
            default:
            {
                printf("Enter valid choice:");
            }
        }
    }
}
int push(int stack[],int i,int j,int choice,int n,int top)
{
    int val;
    if (top == n - 1 )
    printf("\n Overflow");
    else
    {
        printf("Enter the value:");
        scanf("%d",&val);
        top = top +1;
        stack[top] = val;
    }
        return top;
}
int pop(int stack[],int i,int j,int choice,int n,int top)
{
    if(top == -1)
    printf("Underflow");
    else
    top = top -1;
        return top;
}
int display(int stack[],int i,int j,int choice,int n,int top)
{
    for (i=top;i>=0;i--)
    {
        printf("%d\n",stack[i]);
    }
     if(top == -1)
    {
        printf("Stack is empty");
    }
}
