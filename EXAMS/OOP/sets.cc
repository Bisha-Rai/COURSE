#include<iostream>
using namespace std;
class Person
{
    public:
    string name;
    int age;
    void input()
    {
        cout<<"Enter the name and age \n";
        cin>>name>>age;
    }
    void output()
    {
        cout<<"name: "<<name<<"\n age: "<<age<<endl;
    }
};
class employee: public Person
{
    public:
    int employee_id;
    void input()
    {   
    Person::input();
        cout<<"enter the employee id : \n";
        cin>>employee_id;
    }
    void output()
    {   
        Person::output();
        cout<<"Employee Id: "<<employee_id<<endl;
    }
};
class Manager:  public employee
{
    public:
    string department;
    void input()
    {
        employee::input();
        cout<<"enter the managers department name:\n";
        cin>>department;
    }
    void output()
    {
        employee::output();
        cout<<"Department: "<<department<<endl;
    }
};
int main()
{
    Manager m;
    m.input();
    m.output();
}