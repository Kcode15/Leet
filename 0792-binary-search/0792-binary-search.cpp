class Solution {
public:
    int search(vector<int>& nums, int target) {
        int n = nums.size();
        int i = 0;
        int j = n-1;
        int mid = i+(j-i)/2;
        int ans = -1;
        while(i<=j){
            if(nums[mid]==target){
                ans = mid;
                break;
            }
            else if(nums[mid]>target){
                j=mid-1;
            }
            else{
                i=mid+1;
            }
            mid = i+(j-i)/2;
        }
        return ans;
    }
};