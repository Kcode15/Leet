class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        int n = nums.size();
        vector<int> ans;
        unordered_map<int,int> umap;
        for(int i=0;i<n;i++){
            int num = nums[i];
            int diff =target - nums[i];
            if(umap.find(diff)!=umap.end()){
                return {i,umap[diff]};
            }
            umap[num] = i;
        }
        return {};
    }
};