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
        ll n, c;
        cin >> n >> c;

        vector<ll> a(n);
        ll sum = 0, sqrSum = 0;

        for (ll i = 0; i < n; i++) {
            cin >> a[i];
            sum += a[i];
            sqrSum += a[i] * a[i];
        }

        ll lo = 0, hi = 1e9, ans = 0;

        while (lo <= hi) {
            ll mid = (lo + hi) / 2;

            // compute total area
            long double area = 0;
            for (ll i = 0; i < n; i++) {
                long double x = a[i] + 2.0L * mid;
                area += x * x;
            }

            if (area <= c) {
                ans = mid;
                lo = mid + 1;
            } else {
                hi = mid - 1;
            }
        }

        cout << ans << endl;
    }

    return 0;
}
