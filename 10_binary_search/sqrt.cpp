// class Solution {
// public:
//     int binarySearch(int n){
//         int s=0;
//         int e=n;
//         long long int mid=s+(e-s)/2;
//         int ans=-1;
//         while(s<=e){
//             long long int square=mid*mid;
//             if(square==n){
//                 return mid;
//             }
//             if(square<n){
//                 ans=mid;
//                 s=mid+1;
//             }
//             else{
//                 e=mid-1;
//             }
//             mid=s+(e-s)/2;
//         }
//         return ans;
//     }
//     int mySqrt(int x) {
//     return binarySearch(x);
//     }
// };

//https://leetcode.com/problems/sqrtx/



  #include <iostream>
  using namespace std;
    int sqrtInteger(int n){
        int s=0;
        int e=n;
        long long int mid=s+(e-s)/2;
        int ans=-1;
        while(s<=e){
            long long int square=mid*mid;
            if(square==n){
                return mid;
            }
            if(square<n){
                ans=mid;
                s=mid+1;
            }
            else{
                e=mid-1;
            }
            mid=s+(e-s)/2;
        }
        return ans;
    }
double morePrecision(int n,int precision,int tempsol){
      double factor=1;
      //0.1  (1st iteration)
      //0.01 (2nd iteration)
      //0.001 (3rd iteration)
      double ans= tempsol;
      for (int i = 0; i < precision; i++)
      {
        factor=factor/10;
        for (double j = ans; j*j< n; j=j+factor)
        {
            ans=j;
        }
        
      }
      return ans;
      
}
  int main()
  {
    int n;
    cout<<"enter the number"<<endl;
    cin>>n;
    int tempsol=sqrtInteger(n);
    cout<<"Answer is"<<morePrecision(n,3,tempsol);
    return 0;
  }