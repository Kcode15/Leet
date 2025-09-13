class Solution {
public:
    int maxFreqSum(string s) {
        int n = s.size();
        unordered_map<char,int> umap;
        int maxi1 = 0,maxi2 =0;
        for(int i=0;i<n;i++){
            if(s[i]=='a'||s[i]=='e'||s[i]=='i'||s[i]=='o'||s[i]=='u'){
                umap[s[i]]++;
                maxi1 = max(maxi1,umap[s[i]]);
            }
            else{
                umap[s[i]]++;
                maxi2=max(maxi2,umap[s[i]]);
            }
        }
        return maxi1+maxi2;
    }
};