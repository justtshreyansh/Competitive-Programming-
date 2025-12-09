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
        ll w,h;
        cin>>w>>h;
        int n = 4;
        int maxi =0;
        
        loop(i,0,n){
            int k;
            cin>>k;
            vector<int> v;
            loop(j,0,k){
                int data;
                cin>>data;
                v.push_back(data);
            }
            if(i<2){
                maxi = max(maxi,(v[k-1]-v[0])*h);
            }
            else{
                maxi = max(maxi,(v[k-1]-v[0])*w);
            }
            
        }
        cout<<maxi<<endl;
        
        
    }

    return 0;
}