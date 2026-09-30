#include<iostream>
using namespace std;

void greet(){
    cout<< "Hello" <<endl;
    greet();
}

int main (){
    greet();
   return 0;
}

// conditions for Recursion :
// 1) Base case
// 2) Recursive call