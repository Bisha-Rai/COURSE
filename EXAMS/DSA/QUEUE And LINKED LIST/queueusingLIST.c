#include<stdio.h>
#include<stdlib.h>
struct node
{
    int info;
    struct node*next;
};
struct node*front=NULL;
struct node*rear=NULL;
void enqueue()
{
    printf("enter the data \n");
    int d;
    scanf("%d",&d);
    struct node*newnode=(struct node*)malloc(sizeof(struct node));
    newnode->info=d;
     
    if(front==NULL&&rear==NULL)
    {
    newnode->next=NULL;
    front=newnode;
    rear=newnode;
     printf("enqueued!!\n");
    return;
    }
    rear->next=newnode;
   newnode->next=NULL;
    rear=newnode;
    printf("enqueued!!\n");
}
void dequeue()
{   
    if(front==NULL)
    {
        printf("queue underflow\n");
        return;
    }
    if(front==rear)
    {struct node*ptr=front;
        
         front=NULL;
         rear=NULL;
        free(ptr);
         printf("dequeued\n");
         return;
    }
    struct node*ptr=front;
    front=front->next;
    free(ptr);
    printf("dequeued\n");
}
void display()
{
    if(front==NULL||rear==NULL)
    {
        printf("queue underflow\n");
        return;
    }
    struct node*ptr=front;
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
        printf("enter 1 to enqueue:\nenter 2 to dequeue\nenter 3 to display\nenter 4 to exit:\n");
        scanf("%d",&c);
        switch (c)
        {
            case 1:
                enqueue();
                break;
            case 2:
                dequeue();
                break;
            case 3:
                display();
                break;
            case 4:
                return 0;
            default:
                printf("enter a valid choice\n");
                break;
        }
    }
    return 0;
}