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



struct node{
    int val;
    struct node* next;
};



void solve(){
    struct node element1,element2;
    element1.val=12;
    element2.val=13;
    element1.next=&element2;// note this thing
    // this means the current element ie the node as whole's next
    // is a pointer to next element of same type
    cout<<element2.val<<endl; 
    cout<<element1.val<<endl;
    /* THE MOST IMPORTANT PART*/
    // the whole thing ((*ptr).) is same as (ptr->next)
    // since ptr is being dereferenced its a pointer type
    // here element as a whole is simply available so
    // no need of dereference
    /* NOTE THIS TOO:
    We can also use (.) for an element that is a node itself as 
    above.For a pointer we use (*ptr) to get that element as a
    Whole (or node here). 
    /* END */
}

signed main(){
    fast;
    int t = 1;
    // cin >> t;
    while(t--){
    	solve();
    }
    /* NOTE : WE DONT WANT TO USE STRUCT IN DECLARATION ALL THE TIME */
    return 0;
}