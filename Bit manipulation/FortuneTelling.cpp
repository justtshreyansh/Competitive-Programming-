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
        for(ll i=0;i<n;i++) cin>>a[i];
        bool flag;//if true then it is even else odd
        if(x%2==0){
            flag = true;
        }
        else{
            flag = false;
        }
        for(ll i=0;i<n;i++){
            if(a[i]&1) {
                if(flag){
                    flag = false;
                }
                else{
                    flag = true;
                }
            }
            else{
                if(flag){
                    flag = true;
                }
                else{
                    flag = false;
                }
            }
        }
        bool check = y%2==0?true:false;
        if(check==flag){
            cout<<"Alice"<<endl;
        }
        else{
            cout<<"Bob"<<endl;
        }
    }

    return 0;
}