class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {
        int n = nums.size();
        int start = 0;
        int end = n-1;
        int ans=0;
        int mid = start+(end-start)/2;
        while(start<=end){
            if(nums[mid] == target){
                return mid;
            }
            if(nums[mid]>target){
                end = mid-1;
            }
            else{
                start=mid+1;
            }
            mid = start+(end-start)/2;
        }
        ans = mid;
        return ans;
    }
};