#include <bits/stdc++.h> 
void bubbleSort(vector<int>& arr, int n)
{   
    for(int i=1;i<n;i++){
        //for round 1 to n-1;
        for (int j =0 ; j < n-i; j++) {
          if (arr[j] > arr[j + 1]) {
             swap(arr[j],arr[j+1]);
          }
        }
    }
}


//https://www.naukri.com/code360/problems/bubble-sort_980524