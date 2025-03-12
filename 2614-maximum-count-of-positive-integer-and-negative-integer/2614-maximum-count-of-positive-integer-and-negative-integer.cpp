class Solution {
public:
    int maximumCount(vector<int>& nums) {
        int n = nums.size();
        int countp=0;
        int countn=0;
        int maxi;
        for(int i=0;i<n;i++){
            if(nums[i]<0){
                countn++;
            }
            else if(nums[i]>0){
                countp++;
            }
        }
        maxi=max(countp,countn);
        return maxi;
        
    }
};