#include<iostream>
using namespace std;
class complex1
{
    private:
    int i;
    int r;
    public:
     
        complex1()
        {
            cout<<"enter the real and imaginary number\n";
            cin>>r>>i;
        }
        void display()
    {
        cout<<r<<" + i"<<i<<endl;

    }
        complex1 operator+(complex1 b)
        {
            complex1 temp;
            temp.r=r+b.r;
            temp.i=i+b.i;
            return temp;
        }
};
int main()
{
    complex1 a;
    a.display();
    complex1 b;
    b.display();
    complex1 c=a+b;
    c.display();
   
}