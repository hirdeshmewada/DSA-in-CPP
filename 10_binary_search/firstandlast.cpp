#include <iostream>
using namespace std;

int firstOcc(int arr[],int n,int key){
    int start=0,end=n-1;
    int mid=start+(end-start)/2;
    int ans=-1;
    while (start<=end)
    {
        if(arr[mid]==key){
            ans=mid;
            end=mid-1;
        }
        else if(arr[mid]<key){
            //right me jao
            start=mid+1;
        }
        else if(key<arr[mid]){
            // left me jao
            end=mid-1;
        }
        mid=start+(end-start)/2;
    }
    return ans;
}
int lastOcc(int arr[],int n,int key){
    int start=0,end=n-1;
    int mid=start+(end-start)/2;
    int ans=-1;
    while (start<=end)
    {
        if(arr[mid]==key){
            ans=mid;
            start=mid+1;
        }
        else if(key>arr[mid]){
            //right me jao
            start=mid+1;
        }
        else if(key<arr[mid]){
            // left me jao
            end=mid-1;
        }
        mid=start+(end-start)/2;
    }
    return ans;
}

int main()
{
    int even[7]={1,2,3,3,3,3,5};
   
    cout<<"first occurence of 3 is "<<firstOcc(even,7,3)<<endl;
    cout<<"lastt occurence of 3 is "<<lastOcc(even,7,3)<<endl;

//     first occurence of 3 is 2
// lastt occurence of 3 is 5
     return 0;
}