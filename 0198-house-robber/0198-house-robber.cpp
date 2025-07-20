class Solution {
public:
    int sumRob(int n,vector<int>& nums,vector<int>& dp){
     if(n==0){
        return nums[n];
     }
     if(n<0){
        return 0;
     }
     if(dp[n]!=-1){
        return dp[n];
     }
     int pick = nums[n]+sumRob(n-2,nums,dp);
     int npick = sumRob(n-1,nums,dp);
     return dp[n] = max(pick,npick);
    }
    int rob(vector<int>& nums) {
        int n = nums.size();
        vector<int> dp(n+1,-1);
        int ans = sumRob(n-1,nums,dp);
        return ans;
    }
};