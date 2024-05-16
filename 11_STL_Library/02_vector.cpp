#include <iostream>
#include<vector>
using namespace std;

int main()
{
    vector<int>v;
    vector<int>a(5,1); //initilize all 5 element with 1

    vector<int>last(a);
     for (int i:a)
    {
        cout<<i<<" ";
    }cout<<endl;
 cout<<"last"<<endl;
     for (int i:last)
    {
        cout<<i<<" ";
    }cout<<endl;

    cout<<"size of v "<<v.capacity()<<endl;
    v.push_back(1);
    cout<<"size of v "<<v.capacity()<<endl;
    v.push_back(2);
    cout<<"size of v "<<v.capacity()<<endl;
    v.push_back(3);
    cout<<"size of v "<<v.capacity()<<endl;
    cout<<"size of v "<<v.size()<<endl;

    cout<<"Element at index 2nd Index :"<<v.at(2)<<endl;
    

    cout<<"First Element of array: "<<v.front()<<endl;

    cout<<"Last Element of array: "<<v.back()<<endl;

    cout<<"before pop"<<endl;
    for (int i:v)
    {
        cout<<i<<" ";
    }cout<<endl;
    v.pop_back();
    cout<<"after pop"<<endl;
    for (int i:v)
    {
        cout<<i<<" ";
    }cout<<endl;
    


    cout<<"before clear size "<<v.size()<<endl;
    v.clear();
    cout<<"after clear size "<<v.size()<<endl;
    return 0;
}