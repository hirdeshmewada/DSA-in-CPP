#include <iostream>
using namespace std;

//1 is prime number
//0 not a prime number
bool isPrime(int n){
    for (int i = 2; i < n; i++)
    {
        if(n%i==0){
            return 0;
        }
    }
    return 1;
    
}
int main()
{
    int n;
    cin>>n;
    if(isPrime(n)){
        cout<<"it is a prime number";
    }
    else{
        cout<<"not a prime number";
    }
    return 0;
}