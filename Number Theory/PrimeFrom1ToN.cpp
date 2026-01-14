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
        vector<bool> prime(n+1,true);
        prime[0] =false;
        prime[1] =false;
        for(int i=2;i*i<=n;i++){
            if(prime[i]){

            
            for(int j=i*i;j<=n;j+=i){
                prime[j] = false;
            }
        }
        }

        for(ll i=2;i<=n;i++){
            if(prime[i]) cout<<i<<endl;
            
        }
        cout<<endl;
        cout<<endl;
    }

    return 0;
}