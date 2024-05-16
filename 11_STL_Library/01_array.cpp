#include <iostream>
#include<array>
using namespace std;

int main()
{
    int basic[3]={1,2,3};
    array<int,4>a={1,2,3,4};
    //array stl ki implementation basic array se hoti hain static hain
    int size=a.size();
    for (int i = 0; i < size; i++)
    {
        cout<<a[i]<<endl;
    }
    cout<<"Element at index 2nd Index :"<<a.at(2)<<endl;

    cout<<"Empty or not array:"<<a.empty()<<endl;

    cout<<"First Element of array: "<<a.front()<<endl;

    cout<<"Last Element of array: "<<a.back()<<endl;

    return 0;
}