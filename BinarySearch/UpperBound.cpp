#include<bits/stdc++.h>
using namespace std;
//first element which is greater than  x   (arr[i]>x)
int upperBound(vector<int> &arr,int n,int x){
    int l = 0;
    int r = n-1;
    int ans = n;
    while(l<=r){
        int mid = (l+r)/2;
        if(arr[mid]>x){
            ans = mid;
            r = mid-1;
        }
        else{
            l = mid+1;
        }
    }
    return ans;
}
int main(){
     vector<int> arr = {1, 2, 3, 4, 5, 7, 10, 25, 27};
    int n = arr.size();
    int x = 10;
    cout<<upperBound(arr,n,x)<<endl;
    return 0;
}
