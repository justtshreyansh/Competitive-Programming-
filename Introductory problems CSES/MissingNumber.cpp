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

    ll n;
    cin >> n;
    vector<ll> a(n);
    ll sum = 0;
    for (ll i = 0; i < n - 1; i++)
    {
        cin >> a[i];
        sum += a[i];
    }

    ll sumTillN = n * (n + 1) / 2;
    cout << sumTillN - sum << endl;

    return 0;
}