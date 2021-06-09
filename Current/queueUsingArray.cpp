#include <bits/stdc++.h>
using namespace std;
#define fast ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);


class Myqueue{
    public:
    int front,rear,capacity;
    int *arr;
    Myqueue(int givenSize){
        front=-1;
        rear=-1;
        capacity=givenSize;
        arr=new int[capacity];
    }
    void Enqueue(int insertionValue){
        if(isFull()){
            cout<<"The queue is full"<<endl;
            return ;
        }  
        else if(isEmpty()){
            front=rear=0;
        }
        else{
            rear=(rear+1)%capacity;
        }
        arr[rear]=insertionValue;
    }
    int Dequeue(){
        int item;
        if(isEmpty()){
            cout<<"The queue is empty"<<endl;
            return INT_MIN;
        }
        else if(front==rear and rear==0){
            item=arr[front];
            front=rear=-1;
        }
        else{
            item=arr[front];
            front=(front+1)%capacity;
        }
        return item;
    }

    bool isFull(){
        return ((rear+1)%capacity==front);
    }

    bool isEmpty(){
        return (front==rear and rear==-1);
    }
    int Front(){
        // considering this call is for a non-empty array situation,just return value
        return arr[front];
    }
    int Rear(){
        // considering this call is for a non-empty array situation,just return value
        return arr[rear];
    }
    // THIS IS THE REQUIRED THINGS IN QUEUE
    
};

void solve(){
    Myqueue *q1=new Myqueue(6);
    q1->Enqueue(0);
    int val=q1->Dequeue();
    if(val!=INT_MIN){
        cout<<val<<endl;
    }
    val=q1->Dequeue();
    if(val!=INT_MIN){
        cout<<val<<endl;
    }
    // although there is a problem with the returned value in the case of dequeue
    // other than that there is no problem with the code.
}

int main(){
    int t=1;
    while(t--){
        solve();
    }
    return 0; 
}