#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--){
	    int n,k;
	    cin>>n>>k;
	    vector<long long> a(n),b(n);
	    for(int i=0;i<n;i++) cin>>a[i];
	    for(int i=0;i<n;i++) cin>>b[i];
	    long long ans = 0;
	    long long maxi =0;
	    long long sum =0;
	    for(int i=0;i<min(n,k);i++){
	        sum+=a[i];
	        maxi = max(maxi,b[i]);
	        ans = max(ans,sum+(k-(i+1))*maxi);
	    }
	    cout<<ans<<endl;
	    
	}

}
