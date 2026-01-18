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
        vector<ll> diff(n,0);
        ll q;
        cin>>q;
        while(q--){
            ll l,r,x;
            cin>>l>>r>>x;
            diff[l]+=x;
            if(r+1<n){
                diff[r+1]-=x;
            }

        }
        for(ll i=1;i<n;i++){
            diff[i] += diff[i-1];
        }

        for(ll i=0;i<n;i++){
            cout<<diff[i]+a[i]<<" ";
        }
        cout<<endl;
    }

    return 0;
}