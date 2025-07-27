class Solution {
public:
    int countHillValley(std::vector<int>& nums) {
        int n = nums.size();
        int count = 0;
        int left = 0;
        for (int i = 1; i < n-1; ++i) {
            if (nums[i] != nums[i + 1]) {
                if ((nums[i] > nums[left] && nums[i] > nums[i + 1]) ||
                    (nums[i] < nums[left] && nums[i] < nums[i + 1])) {
                    count++;
                }
                left = i;
            }
        }

        return count;
    }
};