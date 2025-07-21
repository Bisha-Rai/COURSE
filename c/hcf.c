#include<stdio.h>

int rec(int a,int b)
{
    if(b==0)
     return a;
    else
     return rec(b,a%b);
}

int main()
{
    int a;
    printf("enter the number\n");
    scanf("%d",&a);
    int b;
    printf("enter the second number \n");
    scanf("%d",&b);
    int hcf=rec(a,b);
    printf("hcf is %d\n",hcf);
    return 0;
}