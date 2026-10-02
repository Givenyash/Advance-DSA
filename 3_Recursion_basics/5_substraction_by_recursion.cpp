#include<iostream>
using namespace std;

int substract(int n){
    if(n == 0){
        return 0;
    }
    return (n - substract(n-1));
}

int main (){
    int n;
    cin>>n;
    cout<<substract(n);
   return 0;
}