#include <iostream>
#include <stdint.h>
using namespace std;


int getSum(int num[],int n){
    //sum is variable get sum ;
    int sum=0;
    for (int i = 0; i < n; i++)
    {
         sum=sum+num[i];
    }
    return sum;
    
}
int main()
{
    int size;
    cout<<"enter the size of array :";
    cin>>size;

    int num[100];
    // input in array 
    for (int i = 0; i < size; i++)
    {
        cin>>num[i];
    }
    cout<<"Sum of all array elements is "<<getSum(num,size)<<endl;

// output


    

    return 0;
}