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
void dfs(map<ll,vector<ll>>&adj,vector<bool> &visited,ll source,vector<ll> &ans){
    visited[source] = 1;
    ans.push_back(source);
    for(auto neigh:adj[source]){
        if(!visited[neigh]){
            dfs(adj,visited,neigh,ans);
        }
    }


   
}
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
        vector<bool> visited(v+1,false);

        ll source = 6;
        vector<ll> ans;
       
        

        dfs(mpp,visited,source,ans);
        for(ll i=0;i<ans.size();i++){
            cout<<ans[i]<<" ";
        }
        cout<<endl;


        for(auto i:mpp){
            cout<<i.first<<"-> ";
            for(auto j:i.second){
                cout<<j<<" ";
            }
            cout<<endl;
        }
        

    

    return 0;
}