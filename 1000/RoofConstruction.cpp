#include <bits/stdc++.h>
using namespace std;

#define fast_io() ios::sync_with_stdio(false); cin.tie(NULL);
#define endl "\n"
int getMSB(int x) {
    int pos = -1;
    while (x > 0) {
        pos++;
        x >>= 1;
    }
    return pos;
}

int main() {
    fast_io();

    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif

    int t;
    cin >> t;
    while (t--) {
        int n;
        cin>>n;
        int msb = getMSB(n-1);
        int num = 1 << msb;
        for(int i=1;i<num;i++){
            cout<<i<<" ";
        }
        cout<<0<<" "<<num<<" ";
        for(int i=num+1;i<n;i++){
            cout<<i<<" ";
        }
        cout<<endl;

    }

    return 0;
}