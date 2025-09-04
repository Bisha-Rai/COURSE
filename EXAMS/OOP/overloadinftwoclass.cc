#include<iostream>
using namespace std;


  
class C
{
    public:
    int a;
   
    int c;
    C()
    {
        
        c=0;
    }
    void getvalue()
    {
        cout<<"enter the value \n";
        cin>>a;
       
    }
    void display()
    {
         cout<<"value : "<<a<<endl;
         
    }
    void sum()
    {
        cout<<"sum:"<<c<<endl;
    }
    C operator +(C b1)
    {
        C temp;
        temp.c=a+b1.a;
        return temp;
    }

};
int main()
{   
    C a1,b1;
    a1.getvalue();
    b1.getvalue();
    a1.display();
    b1.display();
    C c1=a1+b1;
    c1.sum();
}
