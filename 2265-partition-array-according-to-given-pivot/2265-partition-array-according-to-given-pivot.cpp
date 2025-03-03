class Solution {
public:
    vector<int> pivotArray(vector<int>& nums, int pivot) {
        int n = nums.size();
        vector<int> nums1;
        vector<int> nums2;
        vector<int> nums3;
        for(int i=0;i<n;i++){
            if(nums[i]<pivot){
                nums1.push_back(nums[i]);
            }
            else if(nums[i]==pivot){
                nums2.push_back(nums[i]);
            }
            else{
                nums3.push_back(nums[i]);
            }
        }
        nums1.insert(nums1.end(), nums2.begin(), nums2.end());
        nums1.insert(nums1.end(),nums3.begin(),nums3.end());
        return nums1;
    }
};