class Solution {
public:
    bool static cmp(pair<char, int>& a, pair<char, int>& b) { 
        return a.second > b.second; 
    } 
    string frequencySort(string s) {
        int n = s.size();
        unordered_map<char,int> umap;
        for(char ch: s){
            umap[ch]++;
        }
        vector<pair<char,int>> v1;
        for(auto it: umap){
            v1.push_back(it);
        }
        sort(v1.begin(),v1.end(),cmp);
        string ans = "";
        for(auto &it: v1){
            ans += string(it.second, it.first);
        }
        return ans;
    }
};