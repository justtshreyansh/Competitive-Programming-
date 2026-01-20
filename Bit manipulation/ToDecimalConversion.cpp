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

    ll t;
    cin >> t;
    while (t--)
    {
        // any base  to base 10

        string str;
        ll base;
        cin >> str >> base;

        ll ans = 0;
        for (char c : str)
        {
            int val;
            if (c >= '0' && c <= '9')
                val = c - '0';
            else
                val = c - 'A' + 10;

            ans = ans * base + val;
            cout<<ans<<" ";
        }

        cout << ans << endl;
    }

    return 0;
}