#include <iostream>
#include<map>
using namespace std;

int main()
{
    map<int,string>m;
    m[1]="Hirdesh";
    m[2]="Mewada";
    m[13]="Rajput";
    m[3]="hiro";
    
    m.insert({5,"bhai"});
    cout<<"Before erase"<<endl;
    for (auto i : m)
    {
        cout<<i.first<<" "<<i.second<<endl;
    }
    
    cout<<"find 13 "<<m.count(13)<<endl;
    cout<<"find 13 "<<m.count(-13)<<endl;
auto it=m.find(5);
   for(auto i=it;i!=m.end();i++)
   {
    cout<<(*i).first<<endl;
   }
   m.erase(13);
   cout<<"after erasing 13"<<endl;
    for (auto i : m)
    {
        cout<<i.first<<" "<<i.second<<endl;
    }

  
    return 0;
}