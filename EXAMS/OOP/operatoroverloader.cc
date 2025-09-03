#include<iostream>
using namespace std;
class overload
{
    private:
    int a;
    float b;
    public:
    overload()
    {
        a=0;
        b=0;
    }
    overload(int a)
    {
        this->a=a;
    }
    overload(float b)
    {
        this->b=b;
    }
    void display()
    {
        cout<<"the multiplication is "<<b<<endl;
    }
    overload operator *(overload b1)
    {
        overload temp;
        temp=a*b1.b;
        return temp;
    }
    
};

class root
{
    private:
    int real;
    int imaginary;
    public:
    
      
        root()
        {   
            cout<<"enter the real and imaginary part of the complex number \n";
            cin>>real>>imaginary;

        }
        void display()
        {
            cout<<real<<"+j"<<imaginary<<endl;
        }
        root operator +(root i)
        {
            root temp;
            temp.real=real+i.real;
            temp.imaginary=imaginary+i.imaginary;
            return temp;
        }

};



int main()
{   
    int a;
    float b;
    cout<<"enter the value of integer a and float b\n";
    cin>>a>>b;
    overload a1(a);
    overload b1(b);
    overload c= a1*b1;
    c.display();
    root r;
    r.display();
    root i;
    i.display();
    root t=r+i;
    t.display();

    
    return 0;

}
