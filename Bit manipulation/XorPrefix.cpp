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

    ll t;
    cin >> t;
    while (t--) {
        ll n,q;
        cin>>n>>q;
        vector<int> a(n);
        for(ll i=0;i<n;i++){
            cin>>a[i];
        }
        vector<ll> prefix(n);
        for(ll i=0;i<n;i++){
            prefix[i] = a[i];
            if(i>0){
                prefix[i] ^= prefix[i-1] ;
            }
        }
        while(q--){
            ll l,r;
            cin>>l>>r;
            ll ans = prefix[r];
            if(l>0){
                ans^=prefix[l-1];
            }
            cout<<ans<<endl;
        }
    }

    return 0;
}