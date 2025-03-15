class Solution {
public:
    bool canStealKHouses(const vector<int>& nums, int k, int capability) {
        int count = 0;
        int i = 0;
        while (i < nums.size()) {
            if (nums[i] <= capability) {
                count++;
                i += 2; 
            } else {
                i++;
            }
        }
        return count >= k;
    }
    
    int minCapability(vector<int>& nums, int k) {
        int left = *min_element(nums.begin(), nums.end());
        int right = *max_element(nums.begin(), nums.end());
        
        while (left < right) {
            int mid = left + (right - left) / 2;
            if (canStealKHouses(nums, k, mid)) {
                right = mid;
            } else {
                left = mid + 1;
            }
        }
        
        return left;
    }
};