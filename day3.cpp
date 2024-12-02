/* You are given an array of integers arr[]. Your task is to reverse the given array.*/

#include<iostream>
#include<vector>

using namespace std;

void reverseArray(vector<int> &arr)
{
    int start = 0, end = arr.size() - 1;
    while (start < end)
    {
        swap(arr[start], arr[end]);
        start++;
        end--;
    }
}
int main()
{
    vector<int> arr = {1, 2, 0, 6, 14, 3, 5};
    reverseArray(arr);
    for (int num : arr)
    {
        cout << num << " ";
    }
    return 0;
}