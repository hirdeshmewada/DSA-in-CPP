#include <iostream>
using namespace std;

int binarySearch(int arr[],int size,int key){
    int start=0;
    int end=size-1;
    int mid=start+(end-start)/2;
    
    while (start<=end)
    {   
        if(arr[mid]==key){
            return mid;
        }
        //go to right wala part
        if(key>arr[mid]){
            start=mid+1;
        }
        else{
            end=mid-1;
            
        }
        mid=start+(end-start)/2;
    }
    return -1;
}

int main()
{   
    int even[6]={2,4,6,8,12,18};
    int odd[5]={3,8,11,14,16};
    
    int oddIndex=binarySearch(odd,5,11);
    
    cout<<"Index of 11 is "<< oddIndex <<endl;

    int evenIndex=binarySearch(even,6,12);
    
    cout<<"Index of 12 is "<< evenIndex <<endl;
    // Index of 11 is 2
    // Index of 12 is 4
    return 0;
}