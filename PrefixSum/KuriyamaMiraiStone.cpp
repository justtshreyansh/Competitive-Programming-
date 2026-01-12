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

    
        ll n;
        cin>>n;
        vector<ll> a(n);
        for(int i=0;i<n;i++){
            cin>>a[i];
        }
        vector<ll> pre1(n);
        for(int i=0;i<n;i++){
            pre1[i]  = a[i];
            if(i>0){
                pre1[i]+=pre1[i-1];
            }
        }

        sort(a.begin(),a.end());
        vector<ll> pre2(n);
        for(ll i=0;i<n;i++){
            pre2[i] = a[i];
            if(i>0){
                pre2[i]+=pre2[i-1];
            }
        }

        ll q;
        cin>>q;
        while(q--){
            ll type,l,r;
            cin>>type>>l>>r;
            l--;
            r--;
            if(type==1){
                ll ans = pre1[r];
                if(l>0){
                    ans-=pre1[l-1];
                }
                cout<<ans<<endl;
            }
            else{
                ll ans = pre2[r];
                if(l>0){
                    ans-=pre2[l-1];
                }
                cout<<ans<<endl;
            }
        }
    

    return 0;
}