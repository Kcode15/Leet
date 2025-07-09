class Solution {
public:
    int stairs(int n,vector<int>& dp){
        if(n==0){
            return 1;
        }
        if(n<0){
            return 0;
        }
        if(dp[n]!=-1){
            return dp[n];
        }
        return dp[n]=stairs(n-1,dp)+stairs(n-2,dp);
    }
    int climbStairs(int n) {
        //here we will use dp;
        vector<int> dp(n+1,-1);
        return stairs(n,dp);
    }
};