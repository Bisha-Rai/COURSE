#include<stdio.h>
int fibo(int i)
{
    if(i==1)
    return 0;
    else if(i==2)
    return 1;
    else
    return fibo(i-1)+fibo(i-2);
}
int main()
{
    int n,i;
    printf("enter the value of n\n");
    scanf("%d",&n);
    printf("the fibonacci series : \n");
    for(i=1;i<=n;i++)
    {
        printf("%d\n",fibo(i));
    }
    return 0;
}