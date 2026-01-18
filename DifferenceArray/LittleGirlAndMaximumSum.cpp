#include <bits/stdc++.h>
using namespace std;

#define fast_io()                \
    ios::sync_with_stdio(false); \
    cin.tie(NULL);
#define endl "\n"
#define int long long
#define F first
#define S second
#define PB push_back
#define MP make_pair
#define loop(i, a, b) for (int i = a; i < b; i++)

typedef long long ll;
typedef vector<ll> vi;

signed main() {
    fast_io();

    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif

    
        ll n,q;
        cin>>n>>q;
        vector<ll> a(n);
        for(ll i=0;i<n;i++) cin>>a[i];
        vector<ll> v(n+1,0);
        while(q--){
            ll l,r;
            cin>>l>>r;
            l--;
            r--;
            
            v[l]+=1;
            v[r+1]--;
        }
        for(ll i=1;i<n;i++){
            v[i]+=v[i-1];
        }
        sort(v.begin(),v.begin()+n);
        sort(a.begin(),a.end());

        ll ans = 0;
        for(ll i=0;i<n;i++){
            ans+=(v[i]*a[i]);
        }
        cout<<ans<<endl;

        
    

    return 0;
}