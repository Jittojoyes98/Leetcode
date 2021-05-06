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
	int n,k;
    cin>>n>>k;
    if(k>(n-1)/2){
        cout<<"-1"<<endl;
        return;
    }
    vector<int>a(n);
    for(int i=0;i<n;i++){
        a[i]=i+1;
    }
    for(int i=1;i<n and k>0;i+=2){
        if(i+1<n){
            swap(a[i],a[i+1]);
            k--;
        }
    }
    for(auto x: a){
        cout<<x<<" ";
    }
    cout<<endl;
}




signed main(){
    fast;
    int t ;
    cin >> t;
    while(t--){
    	solve();
    }
    return 0;
}
