class Solution {
public:
    void combSum(int i,int n,vector<int>& arr,vector<int>& ans,vector<vector<int>>& final,int target){
            if(target == 0){
                final.push_back(ans);
                return;
            }
            for(int j=i;j<n;j++){
                if(j>i && arr[j]==arr[j-1]){
                    continue;
                }
                if(arr[j]>target){
                    break;
                }
                ans.push_back(arr[j]);
                combSum(j+1,n,arr,ans,final,target-arr[j]);
                ans.pop_back();
            }

    }
    vector<vector<int>> combinationSum2(vector<int>& candidates, int target) {
        int n = candidates.size();
        sort(candidates.begin(),candidates.end());
        vector<int> ans;
        vector<vector<int>> f_ans;
        combSum(0,n,candidates,ans,f_ans,target);
        return f_ans;
    }
};