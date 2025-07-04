#include<iostream>
using namespace std;
template <typename T>

void MAX(T a, T b)
{
    if (a>b)
        cout <<"\n"<<a<<" is maximum\n";
    else
        cout<<"\n"<<b<<" is maximum\n";
}
int main()
{
    int x,y;
    cout<<"\nenter any two integers: \n";
    cin>>x>>y;
    MAX(x,y);

    char c,d;
    cout<<"\nenter any two characters: \n";
    cin>>c>>d;
    MAX(c,d);
}