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

signed main()
{
    fast_io();

#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif

    ll n, q;
    cin >> n >> q;
    vector<string> a;
    for (ll i = 0; i < n; i++)
    {
        string str;
        cin >> str;
        a.push_back(str);
    }
    vector<vector<int>> pre(n, vector<int>(n));
    for (ll i = 0; i < n; i++)
    {
        for (ll j = 0; j < n; j++)
        {
            int val = 0;
            if (a[i][j] == '*')
                val = 1;
            pre[i][j] = val;
            if (i > 0)
            {
                pre[i][j] += pre[i - 1][j];
            }
            if (j > 0)
            {
                pre[i][j] += pre[i][j - 1];
            }
            if (i > 0 && j > 0)
            {
                pre[i][j] -= pre[i - 1][j - 1];
            }
        }
    }

    while (q--)
    {
        ll y1, x1, y2, x2;
        cin >> y1 >> x1 >> y2 >> x2;
        y1--;
        x1--;
        y2--;
        x2--;
        ll ans = pre[y2][x2];
        if (y1 > 0)
            ans -= pre[y1 - 1][x2];
        if (x1 > 0)
            ans -= pre[y2][x1 - 1];
        if (y1 > 0 && x1 > 0)
            ans += pre[y1 - 1][x1 - 1];

        cout << ans << endl;
    }

    return 0;
}