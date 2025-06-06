class Solution {
public:
    int search(vector<int>& nums, int target) {
        int n = nums.size();
        for(int i=0;i<n;i++){
            if(target==nums[i]){
                return i;
            }
        }
        return -1;
    }
};