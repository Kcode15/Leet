class Solution {
   public:
    int minimumTotal(vector<vector<int>>& triangle) {
        int n = triangle.size();
        vector<vector<int>> dp(n, vector<int>(n, -1));
        for (int j = 0; j < n; j++) dp[n - 1][j] = triangle[n - 1][j];
        for (int i = n - 2; i >= 0; i--) {
            for (int j = 0; j < i + 1; j++) {
                int lower_left = triangle[i][j] + dp[i + 1][j];
                int lower_right = triangle[i][j] + dp[i + 1][j + 1];
                dp[i][j] = min(lower_left, lower_right);
            }
        }
        return dp[0][0];
    }
};