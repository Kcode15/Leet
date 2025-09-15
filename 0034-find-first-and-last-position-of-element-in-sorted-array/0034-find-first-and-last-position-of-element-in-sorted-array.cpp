class Solution {
public:
    int firstOcc(vector<int>& nums,int target){
        int n = nums.size();
        int start = 0;
        int end = n-1;
        int mid = start + (end-start)/2;
        int ans = -1;
        while(start<=end){
            if(nums[mid]==target){
                ans = mid;
                end = mid - 1;
            }
            else if(target>nums[mid]){
                start = mid+1;
            }
            else{
                end = mid-1;
            }
            mid = start+(end-start)/2;
        }
        return ans;
    }
    int lastOcc(vector<int>& nums,int target){
        int n = nums.size();
        int start = 0;
        int end = n-1;
        int mid = start + (end - start)/2;
        int ans = -1;
        while(start<=end){
            if(nums[mid]==target){
                ans = mid;
                start = mid+1;
            }
            else if(target<nums[mid]){
                end = mid-1;
            }
            else{
                start = mid+1;
            }
            mid = start + (end - start)/2;
        }
        return ans;
    }
    vector<int> searchRange(vector<int>& nums, int target) {
        vector<int> ans;
        int first = firstOcc(nums,target);
        int last = lastOcc(nums,target);
        ans.push_back(first);
        ans.push_back(last);
        return ans;
    }
};