class Solution {
public:
    int findLucky(vector<int>& arr) {
        int n = arr.size();
        unordered_map<int,int> umap;
        for(int num: arr){
            umap[num]++;
        }
        int maxi = -1;
        for(auto it:umap){
            if(it.first == it.second){
                maxi = max(it.first,maxi);
            }
        }
        return maxi;
    }
};