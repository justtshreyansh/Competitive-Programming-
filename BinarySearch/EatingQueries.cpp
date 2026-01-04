#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n,q;
        cin>>n>>q;
        vector<int> a(n);
        for(int i=0;i<n;i++) cin>>a[i];
        sort(a.rbegin(),a.rend());
        vector<int> pre(n);
        pre[0] =a[0];
        for(int i=1;i<n;i++){
            pre[i] = a[i]  + pre[i-1];
        }

        while(q--){
            int x;
            cin>>x;
            if(pre.back()<x){
                cout<<-1<<endl;
            }
            else{
                int idx = lower_bound(pre.begin(),pre.end(),x)-pre.begin();
                cout<<idx+1<<endl;
            }
        }
    }
    return 0;
}