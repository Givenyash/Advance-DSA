#include<iostream>
using namespace std;

void printArray(int n, int i, int arr[]){
    if(i == n){
        return;
    }
    cout<<arr[i]<<" ";
    i++;
    printArray(n, i, arr);
}

// void printReverse(int n, int i, int arr[]){
//     if(i == n){
//         return;
//     }
//     printReverse(n,i+1,arr);
//     cout<<arr[i]<<" ";
// }

int main (){
    int n;
    cin>>n;
    int x=0; 

    int arr [n];
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }

    printArray(n,x,arr);
   return 0;
}

// input = [1, 2, 3]
// output = [1, 2, 3]