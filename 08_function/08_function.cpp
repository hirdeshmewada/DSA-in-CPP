#include <iostream>
using namespace std;

int power(){
    int a,b;
    cin>>a>>b;
    int  ans=1;
    for(int i=1;i<=b;i++){
        ans=ans*a;
    }
    return ans;
}
int main(){
    // int a,b;
    // cin>>a>>b;
    // int  ans=1;
    // for (int i=1;i<=b;i++){
    //     ans=ans*a;
    // }
    // cout<<"answer is "<<ans<<endl;


// #way 2
    // int a,b;
    // cin>>a>>b;
    // int ans=power(a,b);
    // cout<<"answer is "<<ans<<endl;
    
    // ##333 way
int ans =power();
cout<<"answer is "<<ans<<endl;




}