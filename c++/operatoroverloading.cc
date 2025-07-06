#include<iostream>
using namespace std;

class ADD
{
    private:
        int a;
    public:
        ADD()
        {
            a=0;
        }
        ADD(int tem)
        {
            a=tem;
        }
        ADD()
        {
            cout<<"\nenter the number :\n";
            cin>>a;
        }
        prefix operator ++(ADD a1) //no need to pass argument cause the class already gets value of the variable from the class constructor
        {
            ADD temp(0);
            temp.a=++a1.a;
            return temp;
        }
        void display()
        {
            cout<<a;
        }
};

int main()
{
    ADD a1;
    cout<<"\nthe number before increment is : ";
    a1.display();
    a1=++a1;
    cout<<"\nthe number after increment is : ";
    a1.display();

}