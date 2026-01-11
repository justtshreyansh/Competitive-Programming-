#include<bits/stdc++.h>
using namespace std;
int main(){
    long long n,x;
    cin>>n>>x;
    vector<long long> a(n);
    long long sum =0;
    long long count =0;
    map<long long,long long> mpp;
    //2 1 4 9 7
    mpp[0] =1;
    for(int i=0;i<n;i++){
        cin>>a[i];
        sum+=a[i];
        long long target = sum -x;
        
        if(mpp.find(target)!=mpp.end()){
            count+=mpp[target];
        }

        mpp[sum]++;

    }
    cout<<count<<endl;

    
    return 0;
}