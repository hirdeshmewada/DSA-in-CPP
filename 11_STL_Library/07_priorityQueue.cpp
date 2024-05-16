#include <iostream>
#include<queue>
using namespace std;

int main()
{
    priority_queue<int>maxi;
    //max heap

    priority_queue<int,vector<int>,greater<int>>mini; //min heap
    maxi.push(1);
    maxi.push(3);
    maxi.push(2);
    maxi.push(0);
    cout<<"size -->"<<maxi.size()<<endl;
    int n=maxi.size();
    for (int i = 0; i < n; i++)
    {
        cout<<maxi.top()<<" ";
        maxi.pop(); //3210
    }cout<<endl;
    

    mini.push(1);
    mini.push(3);
    mini.push(2);
    mini.push(0);
    cout<<"size -->"<<mini.size()<<endl;
    int m=mini.size();
    for (int i = 0; i < m; i++)
    {
        cout<<mini.top()<<" ";
        mini.pop(); //3210
    }cout<<endl;
    cout<<"Khali hain kya bhai  "<<mini.empty();
    return 0;
}