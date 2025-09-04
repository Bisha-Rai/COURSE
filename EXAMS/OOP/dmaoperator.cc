#include<iostream>
using namespace std;
class car
{
string name;
string model;
int speed;
int price;
public:
void details()
{
    cout<<"enter the name of the car\n";
    cin>>name;
    cout<<"enter the model of the car\n";
    cin>>model;
    cout<<"enter the speed of the car\n";
    cin>>speed;
    cout<<"enter the price of the car\n";
    cin>>price;
}
void display()

{
    cout<<"NAME: "<<name<<endl<<"MODEL: "<<model<<endl<<"SPEED: "<<speed<<endl<<"PRICE: "<<price<<endl;
}
};
int main()
{
    int x,i;
    cout<<"enter the number of details to be stored\n";
    cin>>x;
    car *ptr=new car[x];
    for(i=0;i<x;i++)
    {
        ptr[i].details();
    }
    cout<<"displaying :\n";
    for(i=0;i<x;i++)
    {
        ptr[i].display();
    }
}