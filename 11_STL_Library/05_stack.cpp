#include <iostream>
#include<stack>
using namespace std;

int main()
{
    stack<string>s;
    s.push("hirdesh");
    s.push("mewada");
    s.push("ji");
    cout<<"Top element-->"<<s.top()<<endl;
    s.pop();
    cout<<"Top element-->"<<s.top()<<endl;
    cout<<"Size of stack-->"<<s.size()<<endl;
    cout<<"is empty of stack-->"<<s.empty()<<endl;

        return 0;
}