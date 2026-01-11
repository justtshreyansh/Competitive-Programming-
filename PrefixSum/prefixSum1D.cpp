#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,q;
    cin>>n>>q;
    vector<int> a(n);
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    vector<int> pre(n);
    for(int i=0;i<n;i++){
        pre[i] = a[i];
        if(i>0){
            pre[i]+= pre[i-1];
        }
    }

    while(q--){
        int l,r;
        cin>>l>>r;
        int ans = pre[r];
        if(l>0){
            ans-=pre[l-1];
        }
        cout<<"answer is :"<<ans<<endl;
    }
   
    cout<<endl;
    return 0;
}