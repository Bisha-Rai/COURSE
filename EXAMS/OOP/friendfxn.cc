#include<iostream>
using namespace std;
class A
{
    private:
    int x;
    public:
    A()
    {
        cout<<"enter the value of x: \n";
        cin>>x;
    }
    friend int display(A);
};
class B
{
    public:
    int y;
    
    B()
    {
        cout<<"enter the value of y: ";
        cin>>y;
    }
};
int display(A a)
{
    int x=a.x;
    return x;
}
int main()
{
    A a;
    B b;
    int c=display(a);
    cout<<"sum is "<<c+b.y;

}
