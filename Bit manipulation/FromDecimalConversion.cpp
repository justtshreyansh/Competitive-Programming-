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
string decimalToBase(long long num, int base) {
    if (num == 0) return "0";

    string result = "";
    while (num > 0) {
        int rem = num % base;
        if (rem < 10)
            result.push_back('0' + rem);
        else
            result.push_back('A' + (rem - 10));

        num /= base;
    }

    reverse(result.begin(), result.end());
    return result;
}
signed main() {
    fast_io();

    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif

    ll t;
    cin >> t;
    while (t--) {
        ll num,base;
        cin>>num>>base;
        cout<<decimalToBase(num,base)<<endl;
    }

    return 0;
}