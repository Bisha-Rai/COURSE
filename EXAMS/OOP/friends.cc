#include<iostream>
using namespace std;
class B;
class A
{
    private:
    int x;
    public:
    A()
    {
        cout<<"enter value of x \n";
        cin>>x;
    }
    void show()
    {
        cout<<x<<endl;
    }
    friend class B;

};
class B
{
    public:
    int y=5;
    int x;
    B(A a)
    {
        x=a.x;
    }
  
};
int main()
{   
    A a;
    B b(a);
    a.show();
    cout<<b.x+1;
    
   
}
