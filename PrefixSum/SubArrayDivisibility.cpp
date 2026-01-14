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

    
    ll n;
    cin>>n;
    vector<ll> a(n);
    for(ll i=0;i<n;i++) cin>>a[i];

    map<ll,ll> mpp;
    mpp[0] = 1;  

    ll prefix = 0;
    ll ans = 0;

    for (int i = 0; i < n; i++) {
        prefix += a[i];
        ll mod = ((prefix % n) + n) % n;

        ans += mpp[mod];
        mpp[mod]++;
    }

    cout << ans << "\n";


    return 0;
}