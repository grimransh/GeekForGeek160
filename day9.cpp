/* Given the heights of n towers and a positive integer k, increase or decrease the height of all towers by k (only once). 
After modifications, the task is to find the minimum difference between the heights of the tallest and the shortest tower.*/

#include<bits/stdc++.h>
using namespace std;

int getMinDiff(vector<int> &arr, int k){
    sort(arr.begin(), arr.end());
    int n = arr.size();
    int ans = arr[n-1] - arr[0];

    for (int i=1; i<n; i++){
        if (arr[i]-k < 0)
            continue;
        int minn = min(arr[0]+k, arr[i]-k);
        int maxx = max(arr[i-1]+k, arr[n-1]-k);
        ans = min(ans, maxx-minn);
    }
    return ans;
}
int main(){
    vector<int> arr = {12, 6, 4, 15, 17, 10};
    int k = 6;
    cout<<getMinDiff(arr, k);
    return 0;
}
