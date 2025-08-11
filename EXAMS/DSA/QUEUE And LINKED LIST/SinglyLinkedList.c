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
void insert_end(int d)
{
    struct node*newnode=(struct node*)malloc(sizeof(struct node));
    newnode->info=d;
    newnode->next=NULL;
    if(head==NULL)
    {
        head=newnode;
        printf("inserted successfully\n");
        return;
    }
    struct node*ptr=head;
    //to set newnode as the next element for the previous element that was at the end.
    //creating a temporary pointer for loop from head till the node at the end is found.
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
        if(ptr->next==NULL)
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
    if(head==NULL)
    {
        printf("list is empty\n");
        return;
    }
    printf("\nthe list:\n");
    struct node*ptr=head;
    while(ptr!=NULL)
    {
        printf("%d\t",ptr->info);
        ptr=ptr->next;
    }
    printf("\n");
}

void delete_beginning()
{   
    if(head==NULL)
    {
        printf("list is empty\n");
        return;
    }
    struct node*ptr=head;
 head=ptr->next;
 free(ptr);
 printf("deleted successfully\n");
}

void delete_end()
{
    if(head==NULL)
    {
        printf("list is empty\n");
        return;
    }
    struct node *ptr=head;
    if(head->next==NULL)
    {
        free(head);
        head=NULL;
        printf("deleted successfully\n");
        return;
    }
    while(ptr->next->next!=NULL)//if we had done "while(ptr!=NULL)" then the pointer would run until it points at a null structure. The final node is the one that has NULL for its next not the one that has NULL as its address.and we need to delete the one which has null for next.
    {
        ptr=ptr->next;
    }
  
    ptr->next=NULL;
    free(ptr->next);
    printf("deleted successfully\n");
    return;
}

void delete_pos(int p)
{   
    if(head==NULL)
    {
        printf("the list is empty\n");
        return;
    }
    if(p==1)
    {   
        struct node*ptr=head;
        free(ptr);
        head=head->next;
        printf("deleted\n");
        return;
    }
    struct node*ptr=head;
    for(int i=1;i<p-1;i++)
    {
        ptr=ptr->next;
    }
    if(ptr==NULL)
    {
        printf("invalid position\n");
        return;
    }
    if(ptr->next==NULL)
    {
        delete_end();
        return;
    }
    free(ptr->next);
    ptr->next=ptr->next->next;
    printf("deletion successful\n");
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
    printf("enter 6 to delete from beginning\n");
    printf("enter 7 to delete from end\n");
    printf("enter 8 to delete at specified position\n");
    printf("enter 9 to exit\n");
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
            delete_beginning();
            break;
        case 7:
            delete_end();
            break;
        case 9:
            return 0;
        case 4:
            printf("enter the position you want to insert the element is \n");
            scanf("%d",&pos);
            printf("enter the data\n");
            scanf("%d",&data);
            insert_pos_alternate(data,pos);
            break;
        case 8:
            printf("enter the position you want to delete the element from\n");
            scanf("%d",&pos);
            delete_pos(pos);
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










