class Solution {
public:
    int maxAscendingSum(vector<int>& nums) {
        int n = nums.size();
        int sum=0;
        int maxi=0;
        for(int i=0;i<n;i++){
            sum=nums[i];
            for(int j=i+1;j<n;j++){
                if(nums[j]>nums[j-1]){
                    sum=sum+nums[j];
                }
                else{
                    break;
                }
            }
            maxi=max(maxi,sum);
        }
        return maxi;
    }
};