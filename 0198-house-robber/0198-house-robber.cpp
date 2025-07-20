class Solution {
public:
    int rob(vector<int>& nums) {
        int n = nums.size();
        vector<int> dp(n,-1);
        dp[0] = nums[0];
        for(int i=1;i<n;i++){
            int r1 = nums[i];
            if(i>1){
                r1 = r1+dp[i-2];
            }
            int r2 = dp[i-1];
            dp[i]=max(r1,r2);
        }
        return dp[n-1];
    }
};