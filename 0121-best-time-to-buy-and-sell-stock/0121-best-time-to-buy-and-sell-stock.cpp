class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int n = prices.size();
        int mini = prices[0];
        int  res = 0;
        for(int i=1;i<n;i++){
            mini = min(mini,prices[i]);
            int diff = prices[i]-mini;
            res = max(res,diff);
        }
        return res;
    }
};