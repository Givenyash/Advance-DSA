#include<iostream>
#include<bits/stdc++.h>
using namespace std;
class Node{
    public :
    int data;
    Node *next;
};

int main (){
    Node*first = new Node();
    (*first).data = 10;   //first -> data = 10;
    (*first).next = NULL; //first -> next = NULL;
    cout<<(*first).data <<" "<<&(*first)<<" "<<(*first).next;
    return 0;
}