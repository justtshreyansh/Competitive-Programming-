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

    int t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;

        vi a(n);
        loop(i, 0, n) {
            cin >> a[i];
        }

        // prefix sum of a[i]
        vi pre(n);
        pre[0] = a[0];
        loop(i, 1, n) {
            pre[i] = pre[i - 1] + a[i];
        }

        // prefix sum of i * a[i]
        vi pre2(n);
        pre2[0] = 0;
        loop(i, 1, n) {
            pre2[i] = pre2[i - 1] + i * a[i];
        }

        int q;
        cin >> q;

        while (q--) {
            int l, r;
            cin >> l >> r;

            int first = pre2[r];
            if (l > 0) first -= pre2[l - 1];

            int second = pre[r];
            if (l > 0) second -= pre[l - 1];

            int ans = first - (l - 1) * second;
            cout << ans << endl;
        }
    }

    return 0;
}
