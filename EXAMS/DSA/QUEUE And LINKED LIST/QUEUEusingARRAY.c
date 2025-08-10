#include<stdio.h>
#define size 10
int queue[size];
int f=-1,r=-1;
void enqueue(int data)
{
    if((f==-1)&&(r==-1))
    {
    f++;
    r++;
    queue[r]=data;
        printf("enqueued %d successfully to queue[%d]\n",queue[r],r+1);
    }
    else if(r==size-1)
    {
        printf("queue overflow\n");

    }
    else
    {
        r++;
        queue[r]=data;
        printf("enqueued %d successfully to queue[%d]\n",queue[r],r+1);
    }
    return;
}
void display()
{
    if(r==-1)
    {
        printf("queue underflow\n");
    }
 
    else
    {  
        printf("the elements are\n");
        for(int i=f;i<=r;i++)
        {
        printf("%d\n",queue[i]);
        }
    }
    return;
}
void dequeue()
{
    if(f==-1)
    {
        printf("queue underflow\n");
    }
    else if(f==r)
    {
        f=-1;
        r=-1;
        printf("dequeued successfully\n");
    }
    else 
    {
        f++;
        printf("dequeued successfully\n");
    }
    return;
}
int main()
{
    int c;
    int data;
    
    while(1)
    {
    printf("enter 1 to enqueue\n");
    printf("enter 2 to dequeue\n");
    printf("enter 3 to display\n");
    printf("enter 4 to end\n");
    scanf("%d",&c);
        switch (c)
        {
            case 1:
                printf("enter the data you want to enter\n");
                scanf("%d",&data);
                enqueue(data);
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
                printf("\nEnter a valid choice\n");
                break;
        }

    }
    return 0;
}