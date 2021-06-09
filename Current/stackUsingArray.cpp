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

class mystack{
    public:
    int max_size,top;
    int *arr;
    // to create an array dynamically is difficult in cpp or there
    // is no method for it as of now
    mystack(int val){
        top=-1;
        max_size=val;
        arr=  new int[max_size];
    }
    void push(int val){
        arr[++top]=val;
    }
    int pop(){
        return arr[top--];
    }
    int peek(){
        return arr[top];
    }
    void print(){
        for(int i=0;i<=top;i++){
            cout<<arr[i]<<" ";
        }
    }
    bool isEmpty(){
        return (top==-1);
    }
    bool isFull(){
        return (top==max_size-1);
    }
};



void solve(){
	mystack *obj= new mystack(5);
    obj->push(6);
    obj->print();
    obj->push(9);
    obj->push(11);
    obj->pop();
    obj->print();
    // this is the simple implementation of the stack.
    // if in case the dynamic allocation does not work 
    // we can always look for vector rather than array 
    // in some compilers it may not work.
}




signed main(){
    fast;
    int t=1 ;
    // cin >> t;
    while(t--){
    	solve();
    }
    return 0;
}