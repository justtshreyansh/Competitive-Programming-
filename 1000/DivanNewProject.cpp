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
        vector<pair<ll,ll>> a;
        for(ll i=0;i<n;i++){
            ll data;
            cin>>data;
            a.push_back({data,i});
        }
        sort(a.rbegin(),a.rend());
        vector<int> ans(n+1,0);
        int countPos= 1;
        int countNeg = -1;
        ll maxi =0;
        for(int i=0;i<n;i++){
            if(i%2==0){
                ans[a[i].second] = countPos;
                
                maxi+=a[i].first *2 * countPos;
                countPos++;
            }
            else{
                ans[a[i].second] = countNeg;
                
                maxi+=a[i].first *2 * abs(countNeg);
                countNeg--;
            }
        }


        cout<<maxi<<endl;
        cout<<0<<" ";
        for(int i=0;i<n;i++){
            cout<<ans[i]<<" ";
        }
        cout<<endl;

    }

    return 0;
}