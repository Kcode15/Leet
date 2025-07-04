class Solution {
public:
    vector<vector<int>> v1;
    void printSub(int i,int n, vector<int>& nums,vector<int> ans){
        if(i==n){
            v1.push_back(ans);
            return;
        }
        ans.push_back(nums[i]); // Take the element
        printSub(i+1,n,nums,ans);
        ans.pop_back(); //Not-take
        printSub(i+1,n,nums,ans);
    }
    vector<vector<int>> subsets(vector<int>& nums) {
        int n = nums.size();
        vector<int> ans;
        printSub(0,n,nums,ans);
        return v1;
    }
};