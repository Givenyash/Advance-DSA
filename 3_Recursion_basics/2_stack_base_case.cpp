#include<iostream>
using namespace std;

// there is no base condition, hence it will be stack over flow;
void fun(int n){
    cout<<n<<endl;

    // if(n == 0){    Base condition
    //     return;
    // }
     
    fun(n-1);
}

int main (){
    fun(5);
   return 0;
}