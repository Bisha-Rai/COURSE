#include<iostream>
using namespace std;
class measurements
{
    int len;
    int width;
    int height;
    public:
    measurements()
    {
        cout<<"enter the length breadth and height of the rectangle\n";
        cin>>len>>width>>height;
    }
    friend class Volume;
};
class Volume
{
    public:
    void display(measurements a)
    {
        cout<<"volume is : "<<a.len*a.width*a.height<<endl;
    }
};
int main()
{
    measurements a;
    Volume v;
    v.display(a);
}
