#include<iostream>
using namespace std;
class sum;
class Base
{
  
    public:
    int x;
    int y;
    Base()
    {
        cout<<"enter the value of x and y:"<<endl;
        cin>>x>>y;
    }
    friend void output(Base,sum);
};
class Derived: public Base
{      
  
    public:

    void showinput()
    {
        cout<<x<<" "<<y<<endl;

    }
};
class sum
{
    private:
    int x;
    int y;
    public:
        sum()
        {
            cout<<"enter the value of subtract:"<<endl;
            cin>>x>>y;
        }
    friend void output(Base,sum);
};
void output(Base b,sum s)
{
    int x,y;
    x=b.x-s.x;
    y=b.y-s.y;
    cout<<x<<" "<<y;
    return;
}
int main()
{
    Base b;
    Derived d;
    d.showinput();
    sum s;
    output(b,s);
    cout<<"\n"<<b.x;
    return 0;
}