#include<bits/stdc++.h>
using namespace std;

void printVector(vector<int>nums, int n, int x){
    if(n == x){
        return;
    }
    cout<<nums[x]<<" ";
    printVector(nums,n,x+1);
}


// void printReverse(vector<int>nums, int n, int x){
//     if(n == x){
//         return;
//     }
//     printReverse(nums,n,x);
//     cout<<nums[x]<<" ";
// }

int main (){
    int n;
    cin>>n;
    int x = 0;

    vector<int>nums(n);
    for(int i=0; i<n; i++){
        cin>>nums[i];
    }
    printVector(nums,n,x);
   return 0;
}