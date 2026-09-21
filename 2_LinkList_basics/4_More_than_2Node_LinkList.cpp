#include<iostream>
#include<bits/stdc++.h>
using namespace std;

class n{
    public :
    int data;
    n *next;
};

void print(n* head){
    n* temp = head;

    while(temp != NULL){
        cout<< temp -> data <<" ";
        temp = temp -> next;
    }
    // cout<<endl;
}

int main (){
    n * first = new n();
    n * second = new n();
    n * third = new n();
    n * fourth = new n();

    n* head = first;

    first -> data = 100;
    first -> next = second;

    second -> data = 200;
    second -> next = third;

    third -> data = 300;
    third -> next = fourth;

    fourth -> data = 400;
    fourth -> next = NULL;

    // cout<< first -> data <<" " << second -> data <<" " << third -> data <<" " << fourth -> data <<endl;
    // cout<< first -> next <<" " << second -> next <<" " << third -> next <<" " << fourth -> next <<endl;
    // cout<< first <<" " << second <<" " << third <<" " <<fourth;

    print(head);
    return 0;
}