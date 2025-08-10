#include<stdio.h>
#include<stdlib.h>
struct node
{
    int info;
    struct node *next;
};
struct node *head = NULL;
void insert(int data)
{
    struct node*newnode=(struct node*)malloc(sizeof(struct node));
    newnode->info=data;
    newnode->next=head;
    head=newnode;
    return;
}
void display()
{
    struct node *ptr=head;
    if(head==NULL)
    {
        printf("list is empty\n");
    }
    else
    {
        printf("the list : \n");
        while(ptr!=NULL)
        {
            printf("%d\t",ptr->info);
            ptr=ptr->next;
        }
    printf("\n");
}
return;
}
int main()
{
    int c,data;
    while(1)
    {
    printf("enter 1 to insert from beginning\n");
    printf("enter 2 to display\n");
    printf("enter 3 to exit\n");
    scanf("%d",&c);
    switch (c)
    {
        case 1:
            printf("enter the data\n");
            scanf("%d",&data);
            insert(data);
            break;
        case 2:
            display();
            break;
        case 3:
            return 0;
        default:
            printf("invalid choice \n");
            break;
    }
    }
    return 0;
}