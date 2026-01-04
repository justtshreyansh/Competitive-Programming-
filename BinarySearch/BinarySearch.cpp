#include <bits/stdc++.h>
using namespace std;
int binarySearch(vector<int> &arr, int x, int n)
{
    int l = 0;
    int r = n - 1;
    while (l <= r)
    {
        int mid = (l + r) / 2;
        if (arr[mid] == x)
        {
            return mid;
        }
        else if(arr[mid]>x){
            r=  mid-1;
        }
        else l = mid+1;
    }
    return -1;
}
int main()
{
    vector<int> arr = {1, 2, 3, 4, 5, 7, 10, 25, 27};
    int n = arr.size();
    int x = 6;
    cout<<binarySearch(arr,x,n)<<endl;
    return 0;
}