class Solution {
public:
    bool divideArray(vector<int>& nums) {
        int n = nums.size();
        unordered_map<int,int> umap;
        for(int num:nums){
            umap[num]++;
        }
        for(auto it:umap){
            if(it.second%2!=0){
                return false;
            }
        }
        return true;
    }
};