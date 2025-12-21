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
        ll n,k,a,b;
        cin>>n>>k>>a>>b;
        vector<ll> x(n+1);
        vector<ll> y(n+1);
        for(ll i=1;i<=n;i++) cin>>x[i]>>y[i];
        ll ans=  abs(x[a]-x[b]) + abs(y[a]-y[b]);
        cerr<<ans<<endl;
        ll x1 = LLONG_MAX/2;
        ll y1 = LLONG_MAX/2;
        for(int i=1;i<=k;i++){
            x1 = min(x1,abs(x[a]-x[i])+abs(y[a]-y[i]));
            y1 = min(y1,abs(x[b]-x[i])+abs(y[b]-y[i]));
            
        }
        ans = min(ans,(x1+y1));
        cout<<ans<<endl;
    }

    return 0;
}