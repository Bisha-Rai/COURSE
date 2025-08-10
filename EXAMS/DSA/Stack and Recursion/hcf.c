#include<stdio.h>
int hcf(int a,int b)   
{
    if(b==0)
    return a;
    else
    return hcf(b,a%b);
}
int main()
{
    printf("enter the value of a and b\n");
    int a,b;
    scanf("%d%d",&a,&b);
    printf("the hcf is %d",hcf(a,b));
    return 0;
}