/*
Given a circular array arr[] of size n, find the maximum possible sum of a non-empty subarray.*/

#include <iostream>
#include <vector>

using namespace std;

int circularSubarraySum(vector<int> &arr){
    int sum = 0;
    int maxx = arr[0], minn = arr[0];
    int maxs= 0, mins = 0;

    for (int i=0; i<arr.size(); i++){
        maxs = max(maxs+arr[i], arr[i]);
        maxx = max(maxx, maxs);
        mins = min(mins+arr[i], arr[i]);
        minn = min(minn, mins);
        sum = sum+arr[i];
    }
    int tSum = maxx;
    int cSum = sum-minn;
    
    if (minn == sum)
        return tSum;
    
    return max(tSum, cSum);
}

int main()
{
    vector<int> arr = {8, -8, 9, -9, 10, -11, 12};
    cout << circularSubarraySum(arr);
}