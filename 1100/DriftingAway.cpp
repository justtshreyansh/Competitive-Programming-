#include <bits/stdc++.h>
using namespace std;

#define fast_io() ios::sync_with_stdio(false); cin.tie(NULL);

void solve(){
    string s;
    cin>>s;
    int n = s.size();
    
    int rightIndex = -1;
    for(int i=0;i<n;i++){
        if(s[i]=='>' || s[i]=='*'){
            rightIndex = i;
            break;
        }
    }
    int leftIndex = -1;
    for(int i=rightIndex+1;i<n;i++){
        if(s[i]=='*' || s[i]=='<'){
            leftIndex =i;
            break;
        }
    }
    if(rightIndex!=-1 && leftIndex!=-1){
        cout<<-1<<"\n";
        return ;
    }

    int maxi = 0;
    int curr=  0;
    for(int i=0;i<n;i++){
        if(s[i]=='<' || s[i]=='*'){
            curr++;
        }
    }
    maxi = max(maxi,curr);
    curr = 0;
    for(int i=0;i<n;i++){
        if(s[i]=='>' || s[i]=='*'){
            curr++;
        }
    }
    maxi = max(maxi,curr);
    cout<<maxi<<"\n";




}

int main(){
    fast_io();

    #ifndef ONLINE_JUDGE
        freopen("input.txt", "r", stdin);
        freopen("output.txt", "w", stdout);
    #endif

    int t; cin >> t;
    while(t--){
        solve();
    }

    return 0;
}