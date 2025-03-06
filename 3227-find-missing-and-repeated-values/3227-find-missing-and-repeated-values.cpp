class Solution {
public:
    vector<int> findMissingAndRepeatedValues(vector<vector<int>>& grid) {
        int n = grid.size();
        int missing; 
        unordered_map<int,int> umap;
        for(int i=0;i<n;i++){
            for(int j=0;j<n;j++){
                int num=grid[i][j];
                umap[num]++;
            }
        }
        for (int i = 1; i <= n * n; i++) {  
            if (umap.find(i) == umap.end()) {  
                missing = i;
            }
        }
        int repeat;
        for(auto it: umap){
            if(it.second==2){
                repeat=it.first;
            }
        }
        return {repeat,missing};
    }
};