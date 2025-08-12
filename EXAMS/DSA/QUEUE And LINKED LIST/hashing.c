#include<stdio.h>
#define size 10
int hashindex[size],i;
int hash(int);
void insert(int k)
{
    int index;
    index=hash(k);
    while(hashindex[index]!=-1)//if hashtable has key -1 then it is free so skip hunxa while ani directly insert. But here tyo index ma -1 xaina vane it already has value so new index needed.
    {
        index=(index+1)%size;
    }
    hashindex[index]=k;
    printf("inserted successfully\n");
}
int hash(int k)
{
    return k%size;
}
void display()
{   
    for(i=0;i<size;i++)
    {
        printf("%d\n",hashindex[i]);
    }
}


int main()
{   
    
    for(i=0;i<size;i++)
    {
        hashindex[i]=-1;
    }
    int key;
    for(i=0;i<size;i++)
    {
        printf("enter the key value\n");
        scanf("%d",&key);
        insert(key);
    }
    display();
    return 0;
}