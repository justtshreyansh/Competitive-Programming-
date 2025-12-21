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
        vector<ll> a(n);
        vector<ll> x(q);
        for(ll i=0;i<n;i++) cin>>a[i];
        for(ll i=0;i<q;i++) cin>>x[i];
        ll prev =31;
        for(ll i=0;i<q;i++){
            if(x[i]>=prev) continue;
            int val = pow(2,x[i]);
            for(ll j=0;j<n;j++){
                if(a[j]%val==0){
                    a[j]+=(val/2);
                }
            }
            prev = x[i];
        }
        for(ll i=0;i<n;i++) cout<<a[i]<<" ";
        cout<<endl;
    }

    return 0;
}