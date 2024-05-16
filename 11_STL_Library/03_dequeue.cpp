#include <iostream>
#include<deque>
using namespace std;

int main()
{
    deque<int>d;
    d.push_back(1);
    d.push_front(2);

    for (int i : d)
    {
        cout<<i<<" ";
    }
    // d.pop_back();  //1 will be deleted
    // d.pop_front();   //from front 2 will be deelted

    cout<<endl;
    for (int i : d)
    {
        cout<<i<<" ";
    }

    cout<<"first Index Element "<<d.at(1)<<endl;  //1
    cout<<"front Index Element "<<d.front()<<endl;  //2
    cout<<"Back Index Element "<<d.back()<<endl;  //1

    cout<<"EMpty or not"<<d.empty()<<endl;   //0that is false
    

    cout<<"before erase "<<d.size()<<endl;
    d.erase(d.begin(),d.begin()+1);
    cout<<"after erase "<<d.size()<<endl;


    for (int i : d)
    {
        cout<<i<<" ";
    }
    

     return 0;
}