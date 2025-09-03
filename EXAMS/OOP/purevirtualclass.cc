#include<iostream>
using namespace std;
class machine
{
    public:
    virtual void function()=0;
    
};
class Bulb:public machine
{
    public:
    void function()override
    {
        cout<<"Bulb on\n";
    }
};
class Tubelight:public machine
{
    public:
    void function()override
    {
        cout<<"Tubelight on\n";
    }
};
class AC :public machine
{
    public:
    void function()override
    {
        cout<<"AC on\n";
    }
};
int main()
{
    machine*m;
    Bulb b;
    Tubelight tl;
    AC ac;
    m=&b;
    m->function();
    m=&tl;
    m->function();
    m=&ac;
    m->function();

}