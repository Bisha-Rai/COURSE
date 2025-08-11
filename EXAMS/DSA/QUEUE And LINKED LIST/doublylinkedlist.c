#include<stdio.h>
#include<stdlib.h>
struct node
{
    int info;
    struct node *next;
    struct node *prev;
};
struct node*head=NULL;


void insert(int data)
{
    struct node*newnode=(struct node*)malloc(sizeof(struct node));
    newnode->info=data;
    newnode->prev=NULL;
    newnode->next=head;
    if(head==NULL)
    {
    head=newnode;
    }
    else
    {
        head->prev=newnode;
    }
    printf("succesfull\n");
    return;
}
void display_from_head()
{   
    if(head==NULL)
    {
        printf("the list is empty\n");
        return;
    }
    struct node*ptr=head;
    printf("displaying\n");
    while(ptr!=NULL)
    {
        printf("%d\t",ptr->info);
        ptr=ptr->next;
    }
    printf("\n");
}
void display_from_end()
{   
    if(head==NULL)
    {
        printf("the list is empty\n");
        return;
    }

    struct node*p=head;
    printf("displaying\n");
    while(p->next!=NULL)
    {
        p=p->next;
    }
    while(p!=NULL)
    {
        printf("%d\t",p->info);
        p=p->prev;
    }
    printf("\n");
}
int main()
{
    int c,d;
    while(1)
    {
        printf("enter 1 to insert data \n");
        printf("enter 2 to display data from head\n");
        printf("enter 3 to display data from end\n");
        printf("enter 4 to exit\n");
        scanf("%d",&c);
        switch (c)
        {
            case 1:
                printf("enter the data\n");
                scanf("%d",&d);
                insert(d);
                break;
            case 2:
                display_from_head();
                break;
            case 3:
                display_from_end();
                break;
            case 4:
                return 0;
            default:
                printf("enter a valid input\n");
                break;
        }
    }
    return 0;

}