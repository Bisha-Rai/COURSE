#include<stdio.h>
#include<stdlib.h>
struct node
{
    int info;
    struct node*next;
};
struct node*TOS=NULL;
void insert_beginning()
{   
    int d;
    printf("enter the data\n");
    scanf("%d",&d); 
    struct node*newnode=(struct node*)malloc(sizeof(struct node));
    if(newnode==NULL)
    {
        printf("memory allocation failed\n");
        return;
    }
    newnode->info=d;
    newnode->next=TOS;
    TOS=newnode;
    printf("pushed successfully\n");
}
void delete_beginning()
{
    if(TOS==NULL)
    {
        printf("stack is empty\n");
        return;
    }
    struct node*ptr=TOS;
    TOS=TOS->next;
    free(ptr);
    printf("popped successfully\n");
}
void display()
{
    if(TOS==NULL)
    {
        printf("stack underflow\n");
        return;
    }
    struct node*ptr=TOS;
    while(ptr!=NULL)
        {
            printf("%d\t",ptr->info);
            ptr=ptr->next;
        }
        printf("\n");
}
int main()
{
    int c;
    while(1)
    {
        printf("enter 1 to push\n");
        printf("enter 2 to pop\n");
        printf("enter 3 to display\n");
        printf("enter 4 to exit\n");
        scanf("%d",&c);
        switch(c)
        {
            case 1:
                insert_beginning();
                break;
            case 2:
                delete_beginning();
                break;
            case 3:
                display();
                break;
            case 4:
                return 0;
            default:
                printf("invalid choice \n");
                break;
        }
    }
    return 0;
}