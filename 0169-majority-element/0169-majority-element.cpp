class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int n = nums.size();
        unordered_map<int,int> umap;
        for(int i=0;i<n;i++){
            umap[nums[i]]++;
        }
        int maxi=0;
        int ans;
        for(auto it:umap){
            int n1=it.second;
            maxi=max(maxi,n1);
            if(maxi==it.second){
                ans=it.first;
            }
        }
        return ans;
    }
};