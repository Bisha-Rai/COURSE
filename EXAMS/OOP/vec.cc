#include<iostream>
#include<vector>
using namespace std;
int main()
{
    vector<int>ele;
    ele.push_back(1);
    ele.push_back(2);
    ele.push_back(3);
    ele.push_back(4);
    ele.pop_back();
    for(int val:ele)
    {
        cout<<val<<" ";

    }   
    cout<<endl;
      cout<<"capacity: "<<ele.capacity()<<"front: "<<ele.front()<<"size: "<<ele.size()<<endl;
     vector<int>sec={1,2,3,4,5};
     cout<<"capacity: "<<sec.capacity()<<"front: "<<sec.front()<<"size: "<<sec.size()<<endl;
     sec.pop_back();
     cout<<"capacity: "<<sec.capacity()<<" size: "<<sec.size()<<endl;
     sec.erase(sec.begin()+2,sec.begin()+4);
     sec.insert(sec.begin()+2,3);
     cout<<sec[3]<<endl;
     for(int val:sec )
     {
        cout<<val<<" ";
     }
     cout<<endl;
     cout<<"is empty : "<<sec.empty()<<endl;
     sec.clear();
    cout<<"is empty : "<<sec.empty()<<endl;


}   