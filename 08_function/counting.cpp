#include <iostream>
using namespace std;
//function signature
void printCounting(int n ){
    //function body
    //when function return nothing we use void //we use void nothing it will reurn 
    for (int i = 1; i <= n; i++)
    {
        cout<<i<<" ";
    }
    
}

int main()
{
    int n;
    cin>>n;
    //function call
    printCounting(n);
    return 0;
}