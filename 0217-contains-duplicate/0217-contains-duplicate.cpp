class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        int n = nums.size();
        unordered_map<int,int> umap;
        for(int num:nums){
            umap[num]++;
        }
        for(auto it:umap){
            if(it.second>1){
                return true;
            }
        }
        return false;
    }
};