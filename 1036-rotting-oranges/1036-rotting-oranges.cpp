class Solution {
public:
    int orangesRotting(vector<vector<int>>& grid) {
        int n = grid.size();
        int m = grid[0].size();
        queue<pair<pair<int,int>,int>> q;
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                if(grid[i][j]==2){
                    q.push({{i,j},0});
                }
            }
        }
        vector<int> drow = {0,0,1,-1};
        vector<int> dcol = {1,-1,0,0};
        int tm = 0;
        while(!q.empty()){
            int r = q.front().first.first;
            int c = q.front().first.second;
            tm = max(tm,q.front().second);
            q.pop();
            for(int i=0;i<4;i++){
                int crow = r+drow[i];
                int ccol = c+dcol[i];
                if(crow>=0 && crow<n && ccol>=0 && ccol<m && grid[crow][ccol]==1){
                    q.push({{crow,ccol},tm+1});
                    grid[crow][ccol]=2;
                }
            }
        }
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                if(grid[i][j]==1){
                    return -1;
                }
            }
        }
        return tm;
    }
};