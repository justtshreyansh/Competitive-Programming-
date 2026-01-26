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
        ll ans =0;
        bool flag =false;
        for(ll i=0;i<n;i++) cin>>a[i];
        for(ll i=1;i<=60;i++){
            set<ll> st;
            ll power  = pow(2,i);
            for(int j=0;j<n;j++){
                
                ll val  =  a[j] % power;
                st.insert(val);
                
            }
            if(st.size()==2){
                flag = true;
                ans = power;
                cout<<power<<endl;
                break;
            }
            if(flag) break;
        }
        if(!flag){
            cout<<ans<<endl;
        }
    }

    return 0;
}