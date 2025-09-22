class Solution {
public:
    int maxFrequencyElements(vector<int>& nums) {
        int n = nums.size();
        unordered_map<int,int> umap;
        for(int num: nums){
            umap[num]++;
        }
        int maxi = 0;
        for(auto it:umap){
            int n1 = it.second;
            maxi = max(maxi,n1);
        }
        int sum = 0;
        for(auto it: umap){
            if(it.second == maxi){
                sum = sum+maxi;
            }
        }
        return sum;
    }
};