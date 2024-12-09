/* Given an array arr[], the task is to find the subarray that has the maximum sum and return its sum.*/

#include<bits/stdc++.h>
using namespace std;

int maxSubarraySum(vector<int> &arr){
    int maxx = arr[0];
    int ans = arr[0];
    for(int i=1; i<arr.size(); i++){
        maxx = max(maxx+arr[i], arr[i]);
        ans = max(ans, maxx);
    }
    return ans;
}

int main(){
    vector<int> arr = {2, 3, -8, 7, -1, 2, 3};
    cout<<maxSubarraySum(arr)<<endl;
    return 0;
}