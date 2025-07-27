class Solution {
public:
    long long maximumMedianSum(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        int n = nums.size();
        int i = 0;
        int j = n-1;
        long long ans = 0;
        while(i<j-1){
           ans = ans+nums[j-1];
           j=j-2;
           i++;
        }
        return ans;
    }
};