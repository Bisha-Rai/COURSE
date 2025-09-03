#include<iostream>
using namespace std;
class A
{
    public:
        int x;
        int y;
        A()//default constructor
        {
            x=10;
            y=20;
        }
        A(int a,int b)//passed constructor
        {
            x=a;
            y=b;
        }
        A(A &d)
        {
            x=d.x;
            y=d.y;
        }
 
};
int main()
{
    int a,b;
    cout<<"Enter the value of x and y\n";
    cin>>a>>b;
    A a1;
    A a2(a,b);
    A a3(a1);
    A a4(a2);
    A a5=a4;
    cout<<"displaying\n";
    cout<<a1.x<<" "<<a1.y<<endl;
    cout<<a2.x<<" "<<a2.y<<endl;
    cout<<a3.x<<" "<<a3.y<<endl;
    cout<<a4.x<<" "<<a4.y<<endl;
    cout<<a5.x<<" "<<a5.y<<endl;
    
}