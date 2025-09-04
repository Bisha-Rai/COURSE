#include<iostream>
using namespace std;
class a
{
    public:
    int dataa;
};
class b
{
    public:
    int datab;
    a a1;
    void getdata()
    {
        cout<<"data a and b\n";
        cin>>a1.dataa>>datab;
    }
    void showdata()
    {
        cout<<"a = "<<a1.dataa<<" b = "<<datab;
    }

};
int main()
{
    b b1;
    b1.getdata();
    b1.showdata();
}