class Solution {
public:
    void combSum(int i,int n,vector<int>& arr,vector<int>& ans,vector<vector<int>>& final,int target){
        if(i==n){
            if(target == 0){
                final.push_back(ans);
            }
            return;
        }
        if(arr[i]<=target){
            ans.push_back(arr[i]);
            combSum(i,n,arr,ans,final,target-arr[i]);
            ans.pop_back();
        }
        combSum(i+1,n,arr,ans,final,target);
    }
    vector<vector<int>> combinationSum(vector<int>& candidates, int target) {
        int n = candidates.size();
        vector<int> ans;
        vector<vector<int>> f_ans;
        combSum(0,n,candidates,ans,f_ans,target);
        return f_ans;
    }
};