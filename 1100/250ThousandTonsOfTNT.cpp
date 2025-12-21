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
        for(ll i=0;i<n;i++) cin>>a[i];
        vector<ll> pre(n);
        pre[0] = a[0];
        for(ll i=1;i<n;i++){
            pre[i] = pre[i-1]+a[i];
        }
        ll ans  = 0;
        for(ll k=1;k<n;k++){
            if(n%k==0){
                ll maxi =LLONG_MIN;
                ll mini = LLONG_MAX;
                
                for (ll j = 0; j < n; j += k) {
                    ll currSum = pre[j + k - 1] - (j > 0 ? pre[j - 1] : 0);
                    maxi = max(maxi, currSum);
                    mini = min(mini, currSum);
                }
                ans = max(ans,maxi-mini);
            }
        }
        cout<<ans<<endl;
    }

    return 0;
}