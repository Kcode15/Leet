class Solution {
public:
    int longestMonotonicSubarray(vector<int>& nums) {
        int n = nums.size();
        int count1=1,count2=1;
        int maxi=1;
        for(int i=0;i<n-1;i++){
            if(nums[i]<nums[i+1]){
                count1++;
                count2=1;
            }
            else if(nums[i]>nums[i+1]){
                count2++;
                count1=1;

            }
            else{
                count1=1;
                count2=1;
            }
            maxi=max(maxi,max(count1,count2));
        }
        return maxi;
    }
};