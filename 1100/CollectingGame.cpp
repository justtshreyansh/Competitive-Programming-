#include <bits/stdc++.h>
using namespace std;

#define fast_io() ios::sync_with_stdio(false); cin.tie(NULL);
#define endl "\n"

int main() {
    fast_io();

    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;

        vector<long long> a(n);
        for (int i = 0; i < n; i++) cin >> a[i];

        vector<pair<long long, int>> v;
        for (int i = 0; i < n; i++) v.push_back({a[i], i});
        sort(v.begin(), v.end());

        vector<long long> pref(n);
        pref[0] = v[0].first;
        for (int i = 1; i < n; i++) pref[i] = pref[i - 1] + v[i].first;

        // position in sorted array
        vector<int> pos(n);
        for (int i = 0; i < n; i++) pos[v[i].second] = i;

        vector<int> ans(n);

        for (int i = 0; i < n; i++) {
            int idx = pos[i];
            long long score = a[i];
            int eaten = 0;

            // 1) Eat all elements before idx using binary search
            int low = 0, high = idx - 1, best = -1;

            while (low <= high) {
                int mid = (low + high) / 2;
                if (pref[mid] <= score + (mid >= 0 ? 0 : 0)) {  // score initially doesn't include them
                    best = mid;
                    low = mid + 1;
                } else {
                    high = mid - 1;
                }
            }

            if (best >= 0) {
                eaten += (best + 1);
                score += pref[best];
            }

            // 2) Eat elements after idx
            int right = idx + 1;

            while (right < n && v[right].first <= score) {
                score += v[right].first;
                eaten++;
                right++;
            }

            ans[i] = eaten;
        }

        for (int i = 0; i < n; i++) cout << ans[i] << " ";
        cout << endl;
    }

    return 0;
}
