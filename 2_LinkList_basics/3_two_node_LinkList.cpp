#include<iostream>
#include<bits/stdc++.h>
using namespace std;

class node{
    public :
    int data;
    node * next;
};

int main (){
    node * first = new node();
    node * second = new node();

    (*first).data = 10;
    (*first).next = second;

    (*second).data = 20;
    (*second).next = NULL;

    cout<<(*first).data<<" "<<(*first).next<<" "<<(*second).data<<" "<<(*second).next<<" "<<second;
   return 0;
}