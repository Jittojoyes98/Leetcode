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




void solve(){
	
}




signed main(){
    fast;
    
    struct node{
        int data;
        node *next;
    };

    class MyLinkedList {
    public:
        /** Initialize your data structure here. */
        
        node *head;
        MyLinkedList() {
            head=NULL;
        }
        
        /** Get the value of the index-th node in the linked list. If the index is invalid, return -1. */
        int get(int index) {
            node *itr=head;
            int ind=-1;
            while(itr!=NULL){
                ind++;
                if(ind==index){
                    return itr->data;
                }
                itr=itr->next;
            }
            return -1;
        }
        
        /** Add a node of value val before the first element of the linked list. After the insertion, the new node will be the first node of the linked list. */
        void addAtHead(int val) {
            node *ptr=(node*)malloc(sizeof(struct node));
            ptr->next=head;
            ptr->data=val;
            head=ptr;
        }
        
        /** Append a node of value val to the last element of the linked list. */
        void addAtTail(int val) {
            node *itr=head;
            node *ptr=(node*)malloc(sizeof(struct node));
            ptr->data=val;
            ptr->next=NULL;
            if(itr==NULL){
                head=ptr;
                return;
            }
            while(itr->next!=NULL){
                itr=itr->next;
            }
            itr->next=ptr;
        }
        
        /** Add a node of value val before the index-th node in the linked list. If index equals to the length of linked list, the node will be appended to the end of linked list. If index is greater than the length, the node will not be inserted. */
        void addAtIndex(int index, int val) {
            node *cur=head,*prev=head;
            node *ptr=(node*)malloc(sizeof(struct node));
            ptr->data=val;
            int ind=-1;
            if(index==0){
                ptr->next=head;
                head=ptr;
                return;
            }
            while(cur!=NULL){
                ind++;
                if(ind==index){
                    prev->next=ptr;
                    ptr->next=cur;
                    return;
                }
                prev=cur;
                cur=cur->next;
                
            }
            if(ind+1==index){
                prev->next=ptr;
                ptr->next=NULL;

            }
        }
        
        /** Delete the index-th node in the linked list, if the index is valid. */
        void deleteAtIndex(int index) {
            if(index==0){
                head=head->next;
                return;
            }
            int ind=-1;
            node *cur=head,*prev=head;
            while(cur!=NULL){
                ind++;
                if(ind==index){
                    prev->next=cur->next;
                    return;
                }
                prev=cur;
                cur=cur->next;
                
            }
        }
    };
    /*We can do any operations here for linked list */
    /**
     * Your MyLinkedList object will be instantiated and called as such:
     * MyLinkedList* obj = new MyLinkedList();
     * int param_1 = obj->get(index);
     * obj->addAtHead(val);
     * obj->addAtTail(val);
     * obj->addAtIndex(index,val);
     * obj->deleteAtIndex(index);
     */
    return 0;
}
