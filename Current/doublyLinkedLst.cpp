#include<bits/stdc++.h>
using namespace std;


// its really easy to understand  doubly linked list if we know singly linkedlist.
// note that the usage or creation of the node with malloc or new is created in the heap
// the simple declaration and accessing doesnot work as the memory is created in the stack
// and is cleared when the function execution ends,and thus this works in "main only" 


struct Node{
    int data;
    struct Node* nxt;
    struct Node* prev;

};

struct Node* head=NULL;

struct Node* createNode(int x){
    struct Node* newNode=(struct Node*)malloc(sizeof(struct Node));
    newNode->data=x;
    newNode->nxt=NULL;
    newNode->prev=NULL;
    return newNode;
}

void insertFront(int val){
    struct Node* newNode=createNode(val);
    if(head==NULL){
        head=newNode;
        return;
    }
    head->prev=newNode;
    newNode->nxt=head;
    head=newNode;
}
void printList(){
    struct Node* temp=head;
    while(temp!=NULL){
        cout<<temp->data<<" ";
        temp=temp->nxt;
    }
    cout<<endl;
}
void printReverse(){
    struct Node* temp=head;
    if(temp==NULL){
        cout<<"No data to be printed\n";
        return;
    }
    while(temp->nxt!=NULL){
        temp=temp->nxt;
    }
    while(temp!=NULL){
        cout<<temp->data<<" ";
        temp=temp->prev;
    }
    cout<<endl;

}
void insertEnd(int val){
    struct Node* newNode=createNode(val);
    struct Node* temp=head;
    while(temp->nxt!=NULL){
        temp=temp->nxt;
    }
    temp->nxt=newNode;
    newNode->prev=temp;

}

void solve(){
    insertFront(8);
    insertFront(10);
    printList();
    printReverse();
    insertEnd(45);
    insertEnd(17);
    printList();
    printReverse();
}
int main(){
    int t=1;
    // cin>>t;
    while(t--){
        solve();
    }
    return 0;
}