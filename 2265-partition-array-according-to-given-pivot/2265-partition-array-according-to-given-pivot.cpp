class Solution {
public:
    vector<int> pivotArray(vector<int>& nums, int pivot) {
        int n = nums.size();
        int i=0;
        int j=n-1;
        int lessI=0;
        int greaterI=n-1;
        vector<int> ans(n);
        while(i<n){
            if(nums[i]<pivot){
                ans[lessI]=nums[i];
                lessI++;
            }
            if(nums[j]>pivot){
                ans[greaterI]=nums[j];
                greaterI--;
            }
            i++;
            j--;
        }
        while(lessI<=greaterI){
            ans[lessI]=pivot;
            lessI++;
        }
        return ans;
    }
};