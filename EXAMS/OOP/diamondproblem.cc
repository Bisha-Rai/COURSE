#include<iostream>
using namespace std;
class a
{
public:
void show()
{
    cout<<"a";
}
};
class b: virtual public a 
{
public:

};
class c: virtual public a
{
public:
void show()
{
   
}
};
class d: public b,public c
{


};
int main()
{
d d1;
d1.show();
}