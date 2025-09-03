#include<iostream>
using namespace std;
class employee
{
    public:
    virtual void showdata()
    {
        cout<<"the earning is ";
    }
};
class parttimer: public employee
{
    private:
    int rph;
    int h;
    public:
    parttimer()
    {
        cout<<"enter the rate per hour and hour: \n";
        cin>>rph>>h;
    }
    void showdata()override
    {
        cout<<"the earning is "<<rph*h<<endl;
    }
};
class salaryman:public employee
{
    private:
    int salary;
    int month;
    public:
    salaryman()
    {
        cout<<"enter the salary per month and no.of month\n";
        cin>>salary>>month;
    }
    void showdata()override
    {
        cout<<"the total earning is "<<month*salary;
    }
};

int main()
{
    employee *e;
    parttimer p;
    salaryman s;
    e=&p;
    e->showdata();
    e=&s;
    e->showdata();
}