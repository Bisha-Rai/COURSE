#include<stdio.h>
#include<stdlib.h>
struct node
{
    int key;
    struct node*lchild;
    struct node*rchild;
};
struct node*root=NULL;
void insert()
{
    int d;
    printf("enter the value of key:\n");
    scannf("%d",&d);

    struct node*newnode=(struct node*)malloc(Sizeof(struct node));
    newnode->key=d;
    if(root=-NULL)
    {
        root=newnode;
        printf("key inserted successfully\n");
        return;
    }
    if(d>root->key)
    {
        root-
    }
}