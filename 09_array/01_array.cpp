#include <iostream>
using namespace std;

void printArray(int arr[],int size){

    cout<<"Printing the array"<<endl;
    // print the array 
    for (int i = 0; i < size; i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<"printing done"<<endl;

         
}
int main()
{
    int  number[15]={0};
    // accessing an array 
    cout<<"Value at index[0]"<<number[1]<<endl;
    // cout<<"Value at index[20]"<<number[20];
    // /initializing an array 
    int second[3]={5,7,11};
//  accessing an element
    cout<<"Value at index[0]"<<second[2];



    int third[15]={7,1,1,4,5,5,5,5};
    int n=15;
    printArray(third,15);
    // cout<<"Printing the array"<<endl;
    // // print the array 
    // for (int i = 0; i < n; i++)
    // {
    //     cout<<third[i]<<" ";
    // }
    
   // initialize all location with zero 
    int fourth[10]={0};
    n=10;
    cout<<"Printing the array"<<endl;
    // print the array 
    for (int i = 0; i < n; i++)
    {
        cout<<fourth[i]<<" ";
    }

   // initialize all location with 1 but not possible
    int five[10]={1};
    n=10;
    cout<<"Printing the array"<<endl;
    // print the array 
    for (int i = 0; i < n; i++)
    {
        cout<<five[i]<<" ";
    }
    
    


    cout<<endl<<"Everything is fine"<<endl;
    return 0;
}