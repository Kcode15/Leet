class Solution {
public:
    int maxFrequencyElements(vector<int>& nums) {
        int n = nums.size();
        unordered_map<int,int> umap;
        int maxi = 0;
        for(int num: nums){
            umap[num]++;
            maxi = max(maxi,umap[num]);
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