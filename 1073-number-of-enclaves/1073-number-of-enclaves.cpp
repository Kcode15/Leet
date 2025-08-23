class Solution {
public:
    void dfs(int i,int j,int n,int m,vector<vector<int>>& grid,vector<vector<int>>& vis){
        if(i<0 || i>=n || j<0 || j>=m){
            return;
        }
        if(grid[i][j]!=1 || vis[i][j]==1){
            return;
        }
        vis[i][j]=1;
        dfs(i-1,j,n,m,grid,vis);
        dfs(i,j-1,n,m,grid,vis);
        dfs(i+1,j,n,m,grid,vis);
        dfs(i,j+1,n,m,grid,vis);
    }
    int numEnclaves(vector<vector<int>>& grid) {
        int n = grid.size();
        int m = grid[0].size(); 
        vector<vector<int>> vis(n,vector<int>(m,0));
        for(int j=0;j<m;j++){
            //first row
            if(grid[0][j]==1 && !vis[0][j]){
                dfs(0,j,n,m,grid,vis);
            }
            //last row
            if(grid[n-1][j]==1 && !vis[n-1][j]){
                dfs(n-1,j,n,m,grid,vis);
            }
        }
        for(int i=0;i<n;i++){
            //first col
            if(grid[i][0]==1 && !vis[i][0]){
                dfs(i,0,n,m,grid,vis);
            }
            //last col
            if(grid[i][m-1]==1 && !vis[i][m-1]){
                dfs(i,m-1,n,m,grid,vis);
            }
        }
        int count = 0;
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                if(grid[i][j]==1 && !vis[i][j]){
                    count++;
                }
            }
        }
        return count;
    }
};