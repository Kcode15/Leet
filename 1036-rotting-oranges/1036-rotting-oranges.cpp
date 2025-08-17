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
        int tm = 0;
        vector<int> dx = {0,0,1,-1}; // for directions in row
        vector<int> dy = {1,-1,0,0}; //  for direcions in column
        while(!q.empty()){
            int r = q.front().first.first;
            int c = q.front().first.second;
            tm = max(tm,q.front().second);
            q.pop();
            for(int i=0;i<4;i++){
                int cx = r+dx[i]; // current row
                int cy = c+dy[i]; // current column
                if(cx>=0 && cx<n && cy>=0 && cy<m && grid[cx][cy]==1){ // Always check the condtion 
                    q.push({{cx,cy},tm+1});  // here we are pushing the neighbouring index which is not visited and fresh
                    grid[cx][cy]=2;
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