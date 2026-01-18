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

    
        ll n,k,q;
        cin>>n>>k>>q;
        vector<int> diff(200002,0);
        while(n--){
            ll l,r;
            cin>>l>>r;
            diff[l]++;
            diff[r+1]--;
        }

        for(ll i=1;i<200002;i++){
            diff[i]+=diff[i-1];
            
        }
        for(ll i=0;i<200002;i++){
            if(diff[i]>=k){
                diff[i] = 1;
            }
            else{
                diff[i] = 0;
            }
        }

       vector<ll> pre(200002,0);
       for(ll i=1;i<200002;i++){
        pre[i] = pre[i-1] + diff[i]; 
       }

        while(q--){
            ll l,r;
            cin>>l>>r;
            cout<<pre[r]-pre[l-1]<<endl;

        }

        




    

    return 0;
}