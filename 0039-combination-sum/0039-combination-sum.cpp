class Solution {
public:
    void combSum(int i,int n,vector<int>& arr,vector<int>& ans,int currSum,vector<vector<int>>& final,int target){
        if(i==n){
            if(currSum==target){
                final.push_back(ans);
            }
            return;
        }
         if(currSum>target){
            return;
         } 
        currSum = currSum+arr[i];
        ans.push_back(arr[i]);
        // if(currSum<target){
        //     combSum(i,n,arr,ans,currSum,final,target);
        // }
        combSum(i,n,arr,ans,currSum,final,target);
        currSum = currSum-arr[i];
        ans.pop_back();
        combSum(i+1,n,arr,ans,currSum,final,target);
    }
    vector<vector<int>> combinationSum(vector<int>& candidates, int target) {
        int n = candidates.size();
        vector<vector<int>> f_ans;
        vector<int> ans;
        combSum(0,n,candidates,ans,0,f_ans,target);
        return f_ans;
    }
};