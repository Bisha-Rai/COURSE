#include<iostream>
using namespace std;
int main()
{
    int *arr=new int;
    cout<<"enter an integer:\n";
    std::cin>>*arr;
    std::cout<<*arr;
}