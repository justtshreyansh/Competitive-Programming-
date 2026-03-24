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
        ll n,x,y;
        cin>>n>>x>>y;
        vector<ll> a(n);
        ll transferred = 0;
        
        for(ll i=0;i<n;i++){
            cin>>a[i];
            transferred += (a[i]/x);
        }

        ll base = transferred  * y;
        ll ans = 0;
        for(ll i=0;i<n;i++){
            ll curr= base;
            curr-=(a[i]/x) * y;
            curr+=a[i];
            ans= max(ans,curr);

        }
        cout<<ans<<endl;





        

        
    }

    return 0;
}