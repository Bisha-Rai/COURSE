#include<iostream>
using namespace std;
class a
{
    private:
    int x;
    public:
    void getdata()
    {
        cout<<"enter the value of x: \n";
        cin>>x;
    }
    void display()
    {
        cout<<x<<endl;
    }
};
class b: public a
{
  int y;
    public:
    void getdata()
    {
        cout<<"enter the value of y: \n";
        cin>>y;
    }
    void display()
    {
        a::display();
        cout<<y<<endl;
    }  
};
int main()
{
    a a1;
    b b1;
    b1.a::getdata();
    b1.getdata();
    b1.display();
}