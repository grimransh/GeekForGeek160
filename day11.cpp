/* Given an integer array, the task is to find the maximum product of any subarray.*/

#include<bits/stdc++.h>
using namespace std;
int maxProduct(vector<int> &arr){
    int ans = INT_MIN;
    int pre = 1, suf = 1;
    int n = arr.size();
    for(int i=0; i<n; i++){
        if(pre==0) pre = 1;
        if(suf==0) suf = 1;
        pre *= arr[i];
        suf *= arr[n-1-i];
        ans = max(ans, max(pre, suf));
    }
    return ans;
}

int main(){
    vector<int> arr = {-2, 6, -3, -10, 0, 2};
    cout<<maxProduct(arr)<<endl;
    return 0;
}