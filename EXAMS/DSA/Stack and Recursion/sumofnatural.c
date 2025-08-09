#include<stdio.h>
long int sum(int n)
{
    if(n==0)
    return 0;
    else
    return n+sum(n-1);
}
int main()
{
    int n;
    printf("enter the value of n\n");
    scanf("%d",&n);
    long int res=sum(n);
    printf("the sum is %d",res);
    return 0;
}