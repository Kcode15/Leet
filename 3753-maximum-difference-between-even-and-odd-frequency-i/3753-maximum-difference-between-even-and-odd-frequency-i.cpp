class Solution {
public:
    int maxDifference(string s) {
        int n = s.size();
        unordered_map<char,int> umap;
        for(char ch : s){
            umap[ch]++;
        }
        int maxi1 = 0;
        int maxi2 = 0;
        int mini1 = INT_MAX;
        int mini2 = INT_MAX;
        for(auto it:umap){
            if(it.second%2==0){
                maxi1=max(maxi1,it.second);
                mini1 = min(mini1,it.second);
            }
            else{
                maxi2 = max(maxi2,it.second);
                mini2 = min(mini2,it.second);
            }
        }
        int diff1 = mini2-maxi1;
        int diff2 = maxi2-mini1;
        return max(diff1,diff2);
    }
};