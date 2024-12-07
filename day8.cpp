/* Given an array prices[] of length N, representing the prices of the stocks on different days, the task is to find the maximum profit possible by buying and selling the stocks on different days when at most one transaction is allowed. 
Here one transaction means 1 buy + 1 Sell.*/

#include<iostream>
#include<vector>
using namespace std;

int maximumProfit(vector<int> &prices){
    int ans = 0;
    int minn = prices[0];

    for (int i = 1; i < prices.size(); i++){
        minn = min(minn, prices[i]);
        ans = max(ans, prices[i] - minn);
    }
    return ans;
}

int main(){
    vector<int> prices = {7, 10, 1, 3, 6, 9, 2};
    cout<<maximumProfit(prices)<<endl;
    return 0;
}