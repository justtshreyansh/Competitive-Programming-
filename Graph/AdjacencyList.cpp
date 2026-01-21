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

    
        ll v,e;
        cin>>v>>e;
        vector<pair<ll,ll>> edgeList;
        for(ll i=0;i<e;i++){
            pair<ll,ll> p ;
            ll a,b;
            cin>>a>>b;
            p.first =a;
            p.second =b;
            edgeList.push_back(p);
        }
        map<ll,vector<ll>> mpp;
        for(ll i=0;i<e;i++){
            ll u = edgeList[i].first;
            ll v = edgeList[i].second;
            mpp[u].push_back(v);
            mpp[v].push_back(u);


        }

        for(auto i:mpp){
            cout<<i.first<<"-> ";
            for(auto j:i.second){
                cout<<j<<" ";
            }
            cout<<endl;
        }
        

    

    return 0;
}