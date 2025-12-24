#include <bits/stdc++.h>
using namespace std;

#define fast_io()                \
    ios::sync_with_stdio(false); \
    cin.tie(NULL);

#define int long long

signed main() {
    fast_io();

    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;

        vector<int> a(n), b(n);
        for (int i = 0; i < n; i++) cin >> a[i];
        for (int i = 0; i < n; i++) cin >> b[i];

        int left = -1, right = -1;

        // find first mismatch
        for (int i = 0; i < n; i++) {
            if (a[i] != b[i]) {
                left = i;
                break;
            }
        }

        // find last mismatch
        for (int i = n - 1; i >= 0; i--) {
            if (a[i] != b[i]) {
                right = i;
                break;
            }
        }

        // if arrays are already equal
        if (left == -1) {
            cout << 1 << " " << 1 << "\n";
            continue;
        }

        // expand left using sorted property of b
        while (left > 0 && b[left - 1] <= b[left]) {
            left--;
        }

        // expand right using sorted property of b
        while (right < n - 1 && b[right + 1] >= b[right]) {
            right++;
        }

        cout << left + 1 << " " << right + 1 << "\n";
    }

    return 0;
}
