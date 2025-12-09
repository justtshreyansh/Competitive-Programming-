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
        ll a,b;
        cin>>a>>b;
        if(b==1){
            if(a==1){
                cout<<3<<endl;
            }
            else if(a==2){
                cout<<2<<endl;
            }
            else{
                cout<<a+1<<endl;
            }
        }
        else if(b==0) {
            if(a==1){
                cout<<1<<endl;
            }
            else {
                cout<<a+1<<endl;
            }
        }
        else{
            cout<<a+1<<endl;
        }
    }

    return 0;
}