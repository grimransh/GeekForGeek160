/* You are given an array of integer arr[] where each number represents a vote to a candidate. 
Return the candidates that have votes greater than one-third of the total votes, 
If there's not a majority vote, return an empty array. */

#include <iostream>
#include <unordered_map>
#include <vector>
using namespace std;

vector<int> findMajority(vector<int> &arr){
    int n = arr.size();
    unordered_map<int, int> f;
    vector<int> ans;

    for (int i : arr)
        f[i]++;
    for (auto it : f){
        int i = it.first;
        int c = it.second;
        if (c > n / 3)
            ans.push_back(i);
    }

    if (ans.size() == 2 && ans[0] > ans[1])
        swap(ans[0], ans[1]);
    return ans;
}

int main()
{

    vector<int> arr = {2, 2, 3, 1, 3, 2, 1, 1};
    vector<int> ans = findMajority(arr);
    for (auto i : ans)
    {
        cout << i << " ";
    }
    return 0;
}