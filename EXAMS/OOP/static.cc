#include<iostream>
using namespace std;
class A
{
    static int x;
    public:
    
    void count()
    {
        x++;
    }
    void display()
    {
        cout<<x<<"\t";
    }
};

class B
{
    static int x;
    public:
    
    void count()
    {
        x++;
    }
    void display()
    {
        cout<<x<<"\t";
    }
};

int A::x=1;
int B::x=5;

int main()
{
    A a1;
    a1.display();
    A a2;
    A a3;
    a2.count();
    a3.count();
    a1.display();
    B b1;
    B b2;
    b2.count();
    b2.count();
    b1.display();
}