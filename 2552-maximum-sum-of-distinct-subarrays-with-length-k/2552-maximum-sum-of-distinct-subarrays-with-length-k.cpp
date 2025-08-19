class Solution {
public:
    long long maximumSubarraySum(vector<int>& nums, int k) {
        int n = nums.size();
        unordered_map<int,int> umap;
        long long sum = 0, maxi = 0;

        int i = 0;
        for (int j = 0; j < n; j++) {
            umap[nums[j]]++;
            sum += nums[j];

            // shrink window if > k
            if (j - i + 1 > k) {
                umap[nums[i]]--;
                if (umap[nums[i]] == 0) umap.erase(nums[i]);
                sum -= nums[i];
                i++;
            }

            // check valid window
            if (j - i + 1 == k && umap.size() == k) {
                maxi = max(maxi, sum);
            }
        }

        return maxi;
    }
};
