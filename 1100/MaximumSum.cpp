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
        vector<ll> a(n);
        for(ll i=0;i<n;i++){
            cin>>a[i];
        }
        
        sort(a.begin(), a.end());

        // Prefix sum
        vector<int> pref(n + 1, 0);
        for (int i = 0; i < n; i++) {
            pref[i + 1] = pref[i] + a[i];
        }

        int ans = 0;

        for (int x = 0; x <= k; x++) {
            int removedMin = 2 * x;
            int removedMax = k - x;

            if (removedMin + removedMax > n) continue;

            int l = removedMin;
            int r = n - removedMax;

            if (l < r) {
                int currSum = pref[r] - pref[l];
                ans = max(ans, currSum);
            }
        }

        cout << ans << "\n";

        
    }

    return 0;
}