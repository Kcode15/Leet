class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        int n =nums.size();
        int sum=0;
        int maxi=0;
        for(int i=0;i<n;i++){
            if(nums[i]==1){
                sum=sum+nums[i];
            }
            if(nums[i]==0){
                sum=0;
            }
            maxi=max(sum,maxi);
        }
        return maxi;
    }
};