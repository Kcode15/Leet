class Solution {
public:
    int maxAbsoluteSum(vector<int>& nums) {
        int n = nums.size();
        int sum=0;
        int maxsum=0, minsum=0;
        for(int i=0;i<n;i++){
            sum=sum+nums[i];
            if(sum>maxsum){
               maxsum=sum;
            }
            if(sum<minsum){
                minsum=sum;
            }
        }
        int ans = abs(maxsum-minsum);
        return ans;
    }
};