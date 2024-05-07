#include<iostream>
using namespace std;

int main(){


    // int n ;
    // cout<<"enter the value of n "<<endl;
    // cin>>n ;
    // cout<<"printing the value of 1 to N"<<endl;
    // for(int i =1;i<=n;i++){
    //     cout<<i<<endl;

    // }
            
    // int i =1;
    // for(; ;){
    //     if(i<=n){
    //         cout<<i<<endl;
    //     }
    //     else{
    //         break;
    //     }
    //     i++;
    // }

    // for (int a=0,b=1;a>=0 &&b>=1;a--,b--){
    //     cout<<a<<" "<<b<<endl;  //we can use multiple values 
    // }

    // ## sum of n numbers..........
     // int n ;
    // cout<<"enter the value of n "<<endl;
    // int sum=0;
    // for (int  i=1; i<=n; i++)
    // {
    //     sum=sum+i;
    // }
    // cout<<sum<<endl;

    // ####################################################
    // fibonacci series

    //   int n =10;
    //   int a=0;
    //   int b=1;
    //   cout<<a<<" "<<b<<" ";

    //   for (int i =1;i<=n;i++){
        
    //     int nxtNumber=a+b;
    //     cout<<nxtNumber<<" ";
    //     a=b;
    //     b=nxtNumber;


    //   }

//####################################################################################
// PRIME NUMBER
// ##########################
  
// int n ;
// cin>>n;
// bool isPrime=1;
// cout<<"enter the value of n "<<endl;
// for (int i = 2; i<n; i++)
// {
//     if(n%2==0){
//         cout<<"it is not aa prieme number"<<endl;
//         isPrime=0;
//         break;
//     }
// }
// if(isPrime==1)
// { 
//     cout<<"the number is prime";
// }
// else{
//     cout<<"the number is not prime";
// }
//  variable sand its scope


 int a=1;
 cout<<a<<endl;
 if(true){
    int a=9;
    int b=4;
    cout<<a<<endl;
 }
 cout<<a<<endl;
// cout<<b<<endl; //error: 'b' was not declared in this scope
// int a=1;      // error'int a' previously declared here
// 
// cout<<a<<endl;
int i=4;
for (int i = 5; i < 6; i++)
{
    cout<<"HI"<<endl; //
}

//##################### operator precedemce

cout<<2*3/4+5<<endl;    //6
cout<<(2*3)/4+5<<endl;     //6


}