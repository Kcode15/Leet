class Solution {
public:
    int findPeakElement(vector<int>& nums) {
        int n = nums.size();
        int s =0;
        int e = n-1;
        int mid = s+(e-s)/2;
        int ans = 0;
        while(s<e){
            if(nums[mid]<nums[mid+1]){
                s = mid+1;
            }
            else{
                e = mid;
            }
            mid = s+(e-s)/2;
        }
        return s;
    }
};