class Solution {
public:
    int findMin(vector<int>& nums) {
        int n = nums.size();
        int low = 0;
        int high = n-1;
        int mini = INT_MAX;
        while(low<=high){
            int mid = low + (high-low)/2;
            if(nums[mid]<mini){
                mini = nums[mid];
            }
            if(nums[high]<nums[mid]){
                low = mid+1;
            }
            else{
                high = mid-1;
            }
        }
        return mini;
    }
};