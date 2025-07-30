class Solution {
public:
    int robo2(int m,int n,vector<vector<int>>& obstacleGrid,vector<vector<int>>& dp){
        if(m==0 && n==0){
            return 1;
        }
        if(m<0 || n<0){
            return 0;
        }
        if(dp[m][n]!=-1){
            return dp[m][n];
        }
        if(obstacleGrid[m][n]!=1){
            int up = robo2(m-1,n,obstacleGrid,dp);
            int left = robo2(m,n-1,obstacleGrid,dp);
            return dp[m][n] = up+left;
        }
        return 0;
    }
    int uniquePathsWithObstacles(vector<vector<int>>& obstacleGrid) {
        int m = obstacleGrid.size();
        int n = obstacleGrid[0].size();
        vector<vector<int>> dp(m,vector<int>(n,-1));
        if(obstacleGrid[0][0]==1){
            return 0;
        }
        return robo2(m-1,n-1,obstacleGrid,dp);
    }
};