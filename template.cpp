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
        ll n,k;
        cin>>n>>k;
        if(k==n*n-1){
            cout<<"NO"<<endl;
            continue;
        }
        vector<vector<char>> v(n,vector<char>(n,'D'));
        k = n*n-k;
        for(int i=0;i<n && k>0;i++){
            for(int j=0;j<n && k>0;j++){
                if(i==0 && j==0){
                    v[i][j] ='R';
                    k--;
                }
                else if(i==0){
                    v[i][j] = 'L';
                    k--;
                }
                else{
                    v[i][j]= 'U';
                    k--;
                }
            }
        }
        cout<<"YES"<<endl;
        for(int i=0;i<n;i++){
            for(int j=0;j<n;j++){
                cout<<v[i][j];
            }
            cout<<endl;
        }
    }

    return 0;
}