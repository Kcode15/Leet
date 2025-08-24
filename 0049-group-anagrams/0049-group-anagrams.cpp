class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        int n = strs.size();
        unordered_map<string,vector<string>> umap;
        vector<vector<string>> ans;
        for(int i=0;i<n;i++){
            string s1 = strs[i];
            sort(s1.begin(),s1.end());
            umap[s1].push_back(strs[i]);
        }
        for(auto it:umap){
            ans.push_back(it.second);
        }
        return ans;
    }
};