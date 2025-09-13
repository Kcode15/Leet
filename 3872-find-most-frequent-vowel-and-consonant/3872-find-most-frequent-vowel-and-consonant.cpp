class Solution {
public:
    int maxFreqSum(string s) {
        int n = s.size();
        unordered_map<char,int> umap;
        for(char ch: s){
            umap[ch]++;
        }
        int maxi1 = 0,maxi2 = 0;
        for(auto it:umap){
            char ch = it.first;
            if(ch=='a'||ch=='e'||ch=='i'||ch=='o'||ch=='u'){
                maxi1 = max(maxi1,it.second);
            }
            else{
                maxi2 = max(maxi2,it.second);
            }
        }
        return maxi1+maxi2;
    }
};