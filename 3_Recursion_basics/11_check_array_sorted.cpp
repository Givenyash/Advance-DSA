#include<bits/stdc++.h>
using namespace std;

bool check(vector<int>nums,int n, int x){
    if(x == n-1){
        return true;
    }
    if(nums[x] > nums[x+1]){
        return false;
    }
    return check(nums, n, x+1);
}

// class Solution {
//   public:
//     bool solve(vector<int>& arr, int i){
//         if(i == arr.size()-1){
//             return true;
//         }
//         if(arr[i] > arr[i+1]){
//             return false;
//         }
//         return solve(arr,i+1);
//     }
    
//     bool isSorted(vector<int>& arr) {
//         // code here
        
//         return solve(arr,0);
//     }
// };

int main (){
    int n;
    cin>>n;
    int x = 0;

    vector<int>nums(n);

    for(int i=0; i<n; i++){
        cin>>nums[i];
    }
    if(check(nums,n,x)){
        cout<<"Array is sorted";
    }
    else{
        cout<<"Array is not sorted";
    }
   return 0;
}


