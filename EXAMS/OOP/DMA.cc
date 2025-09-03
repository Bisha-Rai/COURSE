#include<iostream>
using namespace std;
class A
{
    int i,x;
    int *arr=new int;
    public:
    
        A()
        {
            cout<<"enter the no of values to be stored\n";
            cin>>x;
            arr=new int[x];
        for(i=0;i<x;i++)
            {
                cout<<"enter the value to be stored \n";
                cin>>arr[i];
            }
        }
        void output()
        {
            cout<<"now displaying: \n";
             for(i=0;i<x;i++)
        {
            cout<<arr[i]<<endl;
        }
        }
    ~A()
    {
        delete[] arr;
        cout<<"destructor run successful\n";
    }
};

int main()
{
    A a;
    a.output();
    return 0;
}
