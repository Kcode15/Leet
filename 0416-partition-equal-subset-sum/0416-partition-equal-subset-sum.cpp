class Solution {
public:
    bool subsets(int n,vector<int>& nums,int target,vector<vector<int>> &dp){
        if(n==0){
            return nums[0]==target;
        }
        if(target == 0){
            return true;
        }
        if(dp[n][target]!=-1){
            return dp[n][target];
        }
        bool nt = subsets(n-1,nums,target,dp);
        bool take = false;
        if(nums[n]<=target){
            take = subsets(n-1,nums,target-nums[n],dp);
        }
        return dp[n][target] = take || nt;
    }
    bool canPartition(vector<int>& nums) {
        int n = nums.size();
        int target = 0;
        for(int i=0;i<n;i++){
            target = target+nums[i];
        }
        vector<vector<int>> dp(n,vector<int>(target+1,-1));
        if(target%2!=0){
            return false;
        }
        return subsets(n-1,nums,target/2,dp);
    }
};