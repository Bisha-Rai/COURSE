#include<stdio.h>
int fibo(int n)
{
    if(n==1)
    return 0;
    else if(n==2)
    return 1;
    else
    return fibo(n-1)+fibo(n-2);
}
int main()
{
    int n;
    printf("enter the value of n\n");
    scanf("%d",&n);
    printf("the fibonacci term is %d",fibo(n));
    return 0;
}