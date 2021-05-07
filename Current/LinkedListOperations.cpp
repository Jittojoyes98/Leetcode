#include <bits/stdc++.h>
using namespace std;
#define fast ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
typedef long long ll;typedef long double ld;typedef pair<int,int> pii;
#define F first
#define S second
#define PB push_back
#define MP make_pair
const ll mod = 1e9+7, N = 2e6+7, M = 2e6+7, INF = INT_MAX/10;
ll powe(ll x, ll y){ x = x%mod, y=y%(mod-1);ll ans = 1;while(y>0){if (y&1){ans = (1ll * x * ans)%mod;}y>>=1;x = (1ll * x * x)%mod;}return ans;}

/*Creation of node*/
struct node{
    int data;
    struct node *next;
};

// important here
struct node *head=NULL;

/* Insert the first node */ 
void initial(int x){
    struct node *ptr=(struct node*)malloc(sizeof(struct node));
    ptr->data=x;
    ptr->next=NULL;
    head=ptr;
}

/*Insertion in the front*/
void insertFront(int val){
    struct node *new_node=(struct node*)malloc(sizeof(struct node));
    new_node->data=val;
    new_node->next=head;
    head=new_node;
}

/*Appending or adding from the front */
void insertEnd(int x){
    struct node *ptr=(struct node*)malloc(sizeof(struct node));
    ptr->data=x;
    ptr->next=NULL;
    struct node *itr=head;
    if(head==NULL){
        head=ptr;
        // If somehow not added or taken into consideration
        return;
    }
    while(itr->next!=NULL){
        itr=itr->next;
    }
    itr->next=ptr;
}

/*Inserting after a particular node after a value */
void insertAfterValue(int x,int y){
    node *ptr=(node*)malloc(sizeof(node));
    ptr->data=y;
    node *itr=head;
    while(itr!=NULL){
        if(itr->data==x){
            ptr->next=itr->next;
            itr->next=ptr;
            break;
        }
        itr=itr->next;
    }
    
    /*Just use the stuff*/
    /*We are not considering the head case here */
    
}

/*Delete key or some values */
void deleteKey(int key){
    node *current=head;
    node *prev=head;

    while(current->data!=key){
        if(current->next==NULL){
            cout<<"Value not found-Didnt delete"<<endl;
            return;
        }
        prev=current;
        current=current->next;

    }
    if(current==head and head!=NULL){
        head=head->next;
    }
    else{
        prev->next=current->next;
    }
    /*Note that the Delete key and Delete by position uses the same concept 
     only change is the difference when pos is 1*/
}

/*Delete head*/
void deleteHead(){
    if(head==NULL)
    return;
    head=head->next;
}

/*Search in a linked list*/
void searchNode(int x){
    struct node *itr;
    itr=head;
    if(itr==NULL){
        cout<<"Not found"<<"\n";
        return;
    }
    while(itr->next!=NULL){
        if(itr->data==x){
            cout<<"Found"<<"\n";
            return;
        }
    }
    cout<<"Not found"<<"\n";
}

/*Display the whole linked list*/
void display(){
    struct node *ptr;
    ptr=head;
    while(ptr!=NULL){
        cout<<ptr->data<<"\n";
        ptr=ptr->next;
    }
}

void solve(){
	// insertFront(9);
    // insertFront(12);
    // insertFront(14);
    // insertFront(20);
    // initial(7);
    // initial(10);
    insertEnd(8);
    insertEnd(45);
    insertEnd(34);
    searchNode(8);
    // struct node *prevNode=(struct node*) malloc(sizeof(struct node));
    // prevNode->data=67;
    // prevNode->next=NULL;
    insertAfterValue(45,9);
    deleteKey(45);
    deleteHead();
    display();
}




int main(){
    fast;
    int t = 1;
    // cin >> t;
    while(t--){
    	solve();
    }
    /* NOTE : WE DONT WANT TO USE STRUCT IN DECLARATION ALL THE TIME */
    return 0;
}