
#include <iostream>
using namespace std;


void printArray(int arr[15],int size){

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
  int third[15]={1,2};
  int n=15;
  printArray(third,15);
  int thirdSize=sizeof(third)/sizeof(int);
  cout<<"size of third is "<<thirdSize;
  return 0;
  
}