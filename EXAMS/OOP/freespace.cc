#include<iostream>
using namespace std;
class imag
{
    public:
    int r;
    int i;
    imag()
    {
        i=2;
        r=3;
    }
    imag(imag &c1)
    {
        i=c1.i;
        r=c1.r;
    }
    void display()
    {
        cout<<r<<" + i"<<i<<endl;
    }   
    void operator +(imag c2)
    {
        cout<<"the sum of the complex is "<<r+c2.r<<" + j"<<i+c2.i<<endl;
    }
};
int main()
{
    imag c1;
    c1.display();
    imag c2(c1);
    c2.display();
    c1+c2;
}