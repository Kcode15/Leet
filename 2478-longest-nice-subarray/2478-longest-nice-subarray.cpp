class Solution {
public:
    int longestNiceSubarray(vector<int>& nums) {
        int n = nums.size();
        int l = 0, usedBits = 0, maxLength = 0;
        for (int i=0; i<n;i++) {
            while ((usedBits & nums[i]) != 0) {
                usedBits ^= nums[l];
                l++;
            }

            usedBits |= nums[i];
            maxLength = max(maxLength, i - l + 1);
        }

        return maxLength;
    }
};