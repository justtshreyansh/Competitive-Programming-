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
        ll n,x;
        cin>>n>>x;
        vector<ll> a(n);
        ll sum =0;
        ll maxi = 0;
        for(ll i=0;i<n;i++){
            cin>>a[i];
            
        }

        ll low = 0;
        ll high = 1e18;
        ll ans =0;
        while(low<=high){
            ll mid = low +  (high-low)/2;
            ll water = 0;
            for(int i=0;i<n;i++){
                if(a[i]<mid){
                    water+= mid- a[i];
                    if(water>x){
                        break;
                    }
                }
            }
            if(water<=x){
                ans = mid;
                low= mid+1;
            }
            else{
                high = mid-1;
            }
        }
        cout<<ans<<endl;
        
        
    }

    return 0;
}