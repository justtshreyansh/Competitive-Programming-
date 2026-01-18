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

    ll n,c;
    cin>>n>>c;
    vector<ll> start(n),end(n),val(n);
    for(ll i=0;i<n;i++){
        cin>>start[i]>>end[i]>>val[i];
    }

    set<ll> st;
    for(ll i=0;i<n;i++){
        st.insert(start[i]);
        st.insert(end[i]+1);
    }

    map<ll,ll> mpp;
    int idx= 0;

    for(auto it:st){
        mpp[it] = idx;
        idx++;
    }

    vector<ll> diff(idx+1,0);
    for(ll i=0;i<n;i++){
        diff[mpp[start[i]]]+=val[i];
        diff[mpp[end[i]+1]]-=val[i];
    }

    

    vector<ll> days;
    for(auto it:st){
        days.push_back(it);
    }

    ll ans = 0;
    ll curr = 0;

    for(int i = 0; i < (int)days.size() - 1; i++){
        curr += diff[i];
        ll duration = days[i+1] - days[i];
        ans += duration * min(curr, c);
    }

    cout << ans << endl;

   
    return 0;
}
