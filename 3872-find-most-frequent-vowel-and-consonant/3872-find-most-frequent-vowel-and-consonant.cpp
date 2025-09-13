class Solution {
public:
    int maxFreqSum(string s) {
        int n = s.size();
        unordered_map<char,int> umap1;
        unordered_map<char,int> umap2;
        for(char ch: s){
            if(ch=='a' || ch=='e' || ch=='i' || ch=='o' || ch=='u'){
                umap1[ch]++;
            }
            else{
                umap2[ch]++;
            }
        }
        int maxi1 = 0,maxi2 = 0;
        for(auto it:umap1){
            maxi1 = max(maxi1,it.second);
        }
        for(auto it:umap2){
            maxi2 = max(maxi2,it.second);
        }
        return maxi1+maxi2;
    }
};