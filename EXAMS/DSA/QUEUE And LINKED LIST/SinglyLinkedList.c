#include<stdio.h>
#include<stdlib.h>
void insert_pos_alternate(int,int);
struct node
{
    int info;
    struct node *next;
};
struct node *head = NULL;
void insert_beginning(int data)
{
    struct node*newnode=(struct node*)malloc(sizeof(struct node));
    if(newnode==NULL)
    {
        printf("memory allocation failed\n");
        return;
    }
    newnode->info=data;
    newnode->next=head;
    head=newnode;
}
void insert_end(int data)
{
    struct node*newnode=(struct node*)malloc(sizeof(struct node));

    newnode->info=data;
    newnode->next=NULL;
    if(head==NULL)
    {
        head=newnode;
        return;
    }
    //to set newnode as the next element for the previous element that was at the end.
    struct node*ptr=head; //creating a temporary pointer for loop from head till the node at the end is found.
    //point for node structer since working on node.
    while(ptr->next!=NULL)
       {
            ptr=ptr->next;
       }
            ptr->next=newnode;
}
void insert_pos(int d,int p)
{   
    if(p<1)
    {
        printf("invalid positon\n");
        return;
    }
    int i;
    struct node*ptr=head;
    for(i=1;i<p-1;i++)
    {
        if(ptr==NULL)
        {
            printf("invalid position\n");
            return;
        }
        else
        {
            ptr=ptr->next;
        }
    }
    if(p==1)
    {
        insert_beginning(d);
        return;
    }
    struct node*newnode=(struct node*)malloc(sizeof(struct node));
    newnode->info=d;
    newnode->next=ptr->next;
    ptr->next=newnode;

}
void display()
{
    struct node *ptr=head;
    if(head==NULL)
    {
        printf("list is empty\n");
        return;
    }
   
        printf("the list : \n");
        while(ptr!=NULL)
        {
            printf("%d\t",ptr->info);
            ptr=ptr->next;
        }
    printf("\n");


}
int main()
{
    int c,data,pos;
    while(1)
    {
    printf("enter 1 to insert from beginning\n");
    printf("enter 2 to insert from end\n");
    printf("enter 3 to insert at any position\n");
     printf("enter 4 to insert at any position alternative way\n");
    printf("enter 5 to display\n");
    
    printf("enter 6 to exit\n");
    scanf("%d",&c);
    switch (c)
    {
        case 1:
            printf("enter the data\n");
            scanf("%d",&data);
            insert_beginning(data);
            break;
        case 5:
            display();
            break;
        case 3:
            printf("enter the position you want to insert the element is \n");
            scanf("%d",&pos);
            printf("enter the data\n");
            scanf("%d",&data);
            insert_pos(data,pos);
            break;
        case 2:
            printf("enter the data\n");
            scanf("%d",&data);
            insert_end(data);
            break;
        case 6:
            return 0;
        case 4:
            printf("enter the position you want to insert the element is \n");
            scanf("%d",&pos);
            printf("enter the data\n");
            scanf("%d",&data);
            insert_pos_alternate(data,pos);
            break;

        default:
            printf("invalid choice \n");
            break;
    }
    }
    return 0;
}



void insert_pos_alternate(int d,int p)
{   
    if(p<1)
    {
        printf("invalid positon\n");
        return;
    }
    int i;
    struct node*ptr=head;
    for(i=1;i<p;i++)
    {
        if(ptr==NULL)
        {
            printf("invalid position\n");
            return;
        }
        else
        {
            ptr=ptr->next;
        }
    }
    if(p==1)
    {
        insert_beginning(d);
        return;
    }
    struct node*newnode=(struct node*)malloc(sizeof(struct node));
    newnode->info=ptr->info;
    newnode->next=ptr->next;
    ptr->next=newnode;
    ptr->info=d;

}