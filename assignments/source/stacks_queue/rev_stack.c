#include<stdio.h>
#include<stdlib.h>
int push(int top ,int A[],int size){
    if(top == 0){
       printf("stack is full\n");
    }
    else{
        int n;
        printf("enter the value to be inserted : ");
        scanf("%d",&n);
        A[top--] = n;
    }
    return top;
}
int pop(int top, int size ){
    if(top==size){
        printf("stack is empty\n");
    }
    else
    top = ++top;
    return top;
}
int display(int top, int size , int A[]){
    printf("the elements in the stack is\n");
    for(int i=top;i<=size;i++)
    {
        printf("%d\t ",A[i]);
    }printf("\n");
    return 0;
}
int main()
{
    int n, size, A[20];
    int top ;
    printf("enter the size of the stack\n");
    scanf("%d",&size);
    top = size;
    int t = top;
    while(1){
    printf("1.push\t");
    printf("2.pop\t");
    printf("3.display\t");
    printf("4.exit\n");
    printf("enter the choice : ");
    scanf("%d",&n);
        switch(n){
            case 1 :
            top = push(top , A,size);
            break;
            case 2 :
            top = pop(top,size);
            break;
            case 3 :
            display(top+1,size, A);
            break;
            case 4 :
            exit(0);
            break;
            default :
            printf("invalid \n");
            break;
        }
    }
return 0;
}
