class Solution {
public:
    int singleNonDuplicate(vector<int>& nums) {
        int n = nums.size();
        unordered_map<int,int> umap;
        for(int num:nums){
            umap[num]++;
        }
        int num;
        for(auto it:umap){
            if(it.second==1){
                num = it.first;
                break;
            }
        }
        return num;
    }
};