//created the class for data and address part of the node.
//uses one parameterized constructor fn to add new new node(val + address).
//initialized head and tail in with the NULL.
//created Functions of Linked List : push_front(), push_back(), pop_front() and pop_bacck().
//created a function of printing the Linked List.
//Insert a node in any specific place in the List.

#include<bits/stdc++.h>
using namespace std;

class node{
    public:
    int data;
    node* next;

    node(int val){         //Parameterized constructor (dynamically put value and next in the upcoming newNode)
        this -> data = val;
        this -> next = NULL;
    } //this function is a node type because it is used to create newNodes in the List.
};

class List{
    node* head;
    node* tail;

    public:
    List(){
        head = tail = NULL;
    }

    void push_front(int val){
        node* newNode = new node(val); 
        if(head == NULL){
            head = tail = newNode;
            //cout<<"Inserted a new node from the front when the list was Empty."<<endl;
            return;
        }
        newNode -> next = head;
        head = newNode;
        //cout<<"Inserted a new node from the front in the List."<<endl;
    }

    void push_back(int val){
        node* newNode = new node(val);
        if(head == NULL){
            head = tail = newNode;
            //cout<<"Inserted a new Node from the Back in list when it was empty."<<endl;
            return;
        }
        tail -> next = newNode;
        tail = newNode;
        //cout<<"Inserted a Node from last in the List."<<endl;
    }

    void pop_front(){
        if(head == NULL){
            cout<< "Linked List is already Empty."<<endl;
            return;
        }

        if(head == tail){    //if there exists only 1 node in the Linked List
            delete head;
            head = tail = NULL;
            cout<<"Deleted from front. List in now Empty."<<endl;
            return;
        }

        node* temp = head;
        head = head -> next;
        // temp -> next = NULL;  (correct but, not required).
        delete temp;
        cout<< "Deleted one node from front."<<endl;
    }

    void pop_back(){
        if(head == NULL){
            cout<< "Linked List is already Empty."<<endl;
            return;
        }
        if(head == tail){
            delete head;
            head = tail = NULL;
            cout << "Deleted one node from back."<<endl;
            return;
        }
        node* temp = head;
        while(temp -> next != tail){
            temp = temp -> next;
        }
        temp -> next = NULL;
        delete tail;
        tail = temp;
        cout<<"Deleted one node from back."<<endl;
    }

    void insertSpecific(int val, int pos){
        if(pos < 0){
            cout<<"Invalid position"<<endl;
            return;
        }

        if(pos == 0){
            //push_front(val);
            node* newNode = new node(val); 
            if(head == NULL){
                head = tail = newNode;
                return;
            }
            newNode -> next = head;
            head = newNode;
            return;
        }

        node* temp = head;
        for(int i=0; i<pos-1; i++){
            if(temp == NULL){
                cout<<"invalid position"<<endl;
            }
            temp = temp -> next;
        }
        node* newNode = new node(val);

        newNode -> next = temp -> next;
        temp -> next = newNode;
    }

    int search(int key){
        node* temp = head;
        int index = 0;

        while(temp != NULL){
            if(temp -> data == key){
                return index;
            }
            temp = temp -> next;
            index++;
        }
        return index;
    }

    void print(){
        node* temp = head;
        while(temp != NULL){
            cout<< temp -> data <<"->";
            temp = temp -> next;
        }
        cout<<"NULL";
    }
};

int main (){
    // node* first = new node(1);   
    // node* head = first;
    List ll;

    ll.push_front(1);
    ll.push_front(2);
    ll.push_front(3);
    ll.push_back(4);

    ll.pop_front();
    ll.print();

    // ll.pop_back();
    // ll.print();
    cout<<endl;
    ll.insertSpecific(10,2);

    cout<<"The key is found at "<<ll.search(10)<<" index";
   return 0;
}