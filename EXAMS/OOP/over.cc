#include<iostream>
using namespace std;


  
class C
{
 
    float a;
    float c;
   
    public:
    
  
    C(int x)
    {
        a=x;
        c=0;
    }
    C(float x)
    {
        a=x;
        c=0;
    }
    C()
    {
        a=0;
        c=0;
    }

    void display()
    {
         cout<<"value : "<<a<<endl;
         
    }
    void mul()
    {
        cout<<"mul:"<<c<<endl;
    }
    C operator *(C b1)
    {
        C temp;
        temp.c=a*b1.a;
        return temp;
    }

};
int main()
{   
    float x;
    cout<<"enter the value \n";
    cin>>x;
    C a1(x);
    a1.display();
    cout<<"enter the value \n";
    cin>>x;
    C b1(x);
    b1.display();
    C c1=a1*b1;
    c1.mul();
}
