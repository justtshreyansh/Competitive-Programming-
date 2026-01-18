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
#define loop(i, a, b) for (ll i = a; i < b; i++)

typedef long long ll;
typedef vector<ll> vi;

signed main()
{
    fast_io();

#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif

   
        ll n, m, k;
        cin >> n >> m >> k;
        vector<ll> a(n);
        for (ll i = 0; i < n; i++)
            cin >> a[i];
        vector<ll> diff(n, 0);
        vector<vector<ll>> v;
        ll M = m;
        vector<ll> cnt(M + 1, 0);
        while (m--)
        {

            vector<ll> temp(4);
            for (ll i = 0; i < 3; i++)
            {
                cin >> temp[i];
            }
            temp[0]--;
            temp[1]--;
            v.push_back(temp);
        }

        while (k--)
        {
            ll l, r;
            cin >> l >> r;
            l--;
            r--;
            cnt[l]++;
            cnt[r + 1]--;
        }
        for (ll i = 1; i < M; i++)
        {
            cnt[i] += cnt[i - 1];
        }

        for (ll i = 0; i < M; i++)
        {
            if (cnt[i] == 0)
                continue;

            ll l = v[i][0];
            ll r = v[i][1];
            ll d = v[i][2];

            diff[l] += cnt[i] * d;
            if (r + 1 < n)
                diff[r + 1] -= cnt[i] * d;
        }
        for (ll i = 1; i < n; i++)
        {
            diff[i] += diff[i - 1];
        }

        for (ll i = 0; i < n; i++)
        {
            diff[i] = diff[i] + a[i];
        }
        for (ll i = 0; i < n; i++)
            cout << diff[i] << " ";
        cout << endl;
    

    return 0;
}