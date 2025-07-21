class Solution {
public:
    int sumRob(int i, vector<int>& nums, vector<int>& dp) {
        if (i < 0){
            return 0;
        }
        if (dp[i] != -1) {
            return dp[i];
        }
        int pick = nums[i] + sumRob(i - 2, nums, dp);
        int npick = sumRob(i - 1, nums, dp);

        return dp[i] = max(pick, npick);
    }

    int rob(vector<int>& nums) {
        int n = nums.size();
        if (n == 0) return 0;
        if (n == 1) return nums[0];

        // Case 1: Exclude last house (rob from 0 to n-2)
        vector<int> dp1(n, -1);
        vector<int> nums1(nums.begin(), nums.end() - 1);
        int case1 = sumRob(n - 2, nums1, dp1);

        // Case 2: Exclude first house (rob from 1 to n-1)
        vector<int> dp2(n, -1);
        vector<int> nums2(nums.begin() + 1, nums.end());
        int case2 = sumRob(n - 2, nums2, dp2);

        return max(case1, case2);
    }
};
