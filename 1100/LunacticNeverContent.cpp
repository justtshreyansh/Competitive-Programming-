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
        ll n;
        cin>>n;
        vector<ll> a(n);
        for(int i=0;i<n;i++){
            cin>>a[i];
        }
        ll ans =0;
        for(int i=0;i<n;i++){
            ans = __gcd(ans,abs(a[i]-a[n-i-1]));
            
        }
        cout<<ans<<endl;
    }

    return 0;
}