#include<bits/stdc++.h>
using namespace std;

class node{
    public:
    int data;
    node* next;

    node(int val){  //parameterized constructor (function which assigns automatically data and next)
        this -> data = val;
        next = NULL;
    }
};

int main (){
    node* first = new node(10);
    node* second = new node(20);
    node* third = new node(30);

    first -> next = second;
    second -> next = third;

    cout<<first -> next <<" "<<second -> next<<" "<< first -> data <<" "<< second -> data <<" "<< third -> data; 

   return 0;
}