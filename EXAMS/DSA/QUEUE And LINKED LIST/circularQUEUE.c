#include<stdio.h>
#define size 5
int cqueue[size];
int f=-1,r=-1;
void enqueue(int d)
{   
    if(r==f-1||(f==0)&&(r==size-1))
    {
        printf("stack overflow\n");
    }
    else if(f==-1&&r==-1)
    {
        f++;
        r++;
        cqueue[r]=d;
        printf("enqueue successful\n");
    }
    else
    {
        r=(r+1)%size;
        cqueue[r]=d;
        printf("enqueue successful\n");
    }
    return; 
}
void dequeue()
{
    if(f==-1&&r==-1)
    {
        printf("stack underflow\n");
    }
    else if(f==r)
    {
        f=-1;
        r=-1;
        printf("dequeue successful\n");
    }
    else 
    {
        f=(f+1)%size;
        printf("dequeue successful\n");
    }
    return;
}
void display()
{
    if(f==-1&&r==-1)
    {
        printf("queue is empty\n");
    }
    else 
    {
        for(int i=f;i!=r;i=(i+1)%size)
        {
            printf("%d\t",cqueue[i]);
        }
        printf("%d\n",cqueue[r]);
    }
    return;
}
int main()
{
    int c;
    int data;
    while(1)
    {
        printf("enter 1 to enqueue \n");
        printf("enter 2 to dequeue\n");
        printf("enter 3 to display\n");
        printf("enter 4 to end\n");
        scanf("%d",&c);
        switch (c)
        {
            case 1:
                printf("enter the data: \n");
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
                printf("enter a valid choice\n");
                break;
        }
    }
    return 0;
}