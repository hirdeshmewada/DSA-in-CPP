#include <iostream>
using namespace std;


void update(int arr[],int n)
{

    cout<<"Inside the function"<<endl;
    arr[0]=120;
    for (int i = 0; i < n; i++)
    {
        cout<<arr[i]<<" ";
    }
    



     cout<<endl<<"going back to main()"<<endl;
}
int main()
{
    int arr[3]={1,2,3};
    update(arr,3);

    // printing the array
    for (int i = 0; i < 3; i++)
    {
        cout<<arr[i]<<" ";
    }

// output how main function value updated
// Inside the function
// 120 2 3
// going back to main()
// 120 2 3
    return 0;
}