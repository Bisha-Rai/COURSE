#include<stdio.h>
#define SIZE 5
 int top=-1;
 int Stack[SIZE];
void push(int data)
{
    if (top == SIZE-1)
    {printf("stack overflow\n");}
    else
    {   top=top+1;
        Stack[top]=data;
        
        printf("data pushed successfully\n");
    }
}
void pop()
{
    if(top == -1)
    {printf("stack underflow\n");}
    else
    {
        top=top-1;
        printf("data popped successfully\n");

    }
    
}
void peek()
{
    if(top == -1)
    {printf("stack underflow\n");}
    else
    {
        printf("top element is %d\n",Stack[top]);
    }
}
int main()
{
    int choice;
    int data;
    
   

    while(1)
    {
    printf("enter 1 for push\n");
    printf("enter 2 for pop\n");
    printf("enter 3 for peek\n");

    printf("enter 5 for end\n");
    scanf("%d",&choice);
    switch (choice)
    {
        case 1:
            printf("enter the data to push\n");
            scanf("%d",&data);
            push(data);
            break;
        case 2:
            pop();
            break;
        case 3:
            peek();
            break;
        
        case 5:
            return 0;
        default:
            printf("invalid choice \n");
            break;
    }

    }
}
