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
        int curr = 0;
        vector<vector<int>> a(3,vector<int>(n));
        for(int i=0;i<3;i++){
            for(int j=0;j<n;j++){
                cin>>a[i][j];
            }
        }
        
        for(int i=0;i<3;i++){
            
            for(int j=0;j<n;j++){
                if((x|a[i][j])!=x){
                    break;
                }
                else{
                    curr|=a[i][j];
                }
            }
        }
        if(curr==x){
            cout<<"YES"<<endl;
        }
        else cout<<"NO"<<endl;
        
    }

    return 0;
}