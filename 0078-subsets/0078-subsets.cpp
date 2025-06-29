class Solution {
public:
    void backtrack(int start, vector<int>& nums, vector<int>& current, vector<vector<int>>& result) {
        result.push_back(current); // Save the current subset

        for (int i = start; i < nums.size(); ++i) {
            current.push_back(nums[i]);         // Choose the element
            backtrack(i + 1, nums, current, result); // Recurse
            current.pop_back();                // Undo the choice (backtrack)
        }
    }

    vector<vector<int>> subsets(vector<int>& nums) {
        vector<vector<int>> result;
        vector<int> current;
        backtrack(0, nums, current, result);
        return result;
    }
};
