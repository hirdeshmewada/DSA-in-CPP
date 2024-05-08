#include <iostream>
using namespace std;

void printArray(int arr[],int n){
     for (int i = 0; i < n; i++)
     {
        cout<<arr[i]<<" ";
     }cout<<endl;
     
}
int swapAtlernate(int arr[],int size){
    for(int i=0;i<=size;i+=2){
    if (i+1<size)
    {
        swap(arr[i],arr[i+1]);
    }
    
}
}

int main()
{
    int even[8]={1,53,32,12,23,43,54,32};
    int odd[3]={1,23,232};
    swapAtlernate(even,8);
    printArray(even,8);
    
    swapAtlernate(odd,3);
    printArray(odd,3);

    return 0;
}