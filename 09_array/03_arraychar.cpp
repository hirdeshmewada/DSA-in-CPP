#include <iostream>
using namespace std;
void printArray(char arr[15],int size){

    cout<<"Printing the array using function"<<endl;
    // print the array 
    for (int i = 0; i < size; i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<endl<<"printing done"<<endl;

         
}
int main()
{
    char ch[5]={'a','b','c','d','e'};
    cout<<ch[2]<<endl;
    int n=5;
    for (int i = 0; i < n; i++)
    {
        cout<<ch[i]<<" ";
    }
    
    printArray(ch,5);




    cout<<"Everthing is fine"<<endl;

    double firstDouble[5];
    float firstfloat[5];
    bool firstbool[5];
    return 0;
}