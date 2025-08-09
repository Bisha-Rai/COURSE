#include<stdio.h>
long int fact(int n)
{
    if((n==0)||(n==1))  
    return 1;
    else 
    return n*fact(n-1);
}
int main()
{
    int n;
    long int res;
    printf("enter the number whose factorial is to be print: \n");
    scanf("%d",&n);
    res=fact(n);
    printf("the factorial of %d is %d\n",n,res);
    return 0;
}