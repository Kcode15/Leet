class Solution {
public:
    void dfs(int i,int j,int n,int m,vector<vector<char>>& board,vector<vector<int>>& vis){
        if(i<0 || i>=n || j<0 || j>=m){
            return;
        }
        if(board[i][j]!='O' || vis[i][j] == 1){
            return;
        }
        vis[i][j] =1;
        dfs(i-1,j,n,m,board,vis);
        dfs(i,j-1,n,m,board,vis);
        dfs(i+1,j,n,m,board,vis);
        dfs(i,j+1,n,m,board,vis);
    }
    void solve(vector<vector<char>>& board) {
        int n = board.size();
        int m= board[0].size();
        vector<vector<int>> vis(n,vector<int>(m,0));
        for(int j=0;j<m;j++){
            //first row
            if(board[0][j]=='O' && !vis[0][j]){
                dfs(0,j,n,m,board,vis);
            }
            // last row
            if(board[n-1][j]=='O' && !vis[n-1][j]){
                dfs(n-1,j,n,m,board,vis);
            }
        }
        for(int i=0;i<n;i++){
            //first column
            if(board[i][0]=='O' && !vis[i][0]){
                dfs(i,0,n,m,board,vis);
            }
            // last column
            if(board[i][m-1]=='O' && !vis[i][m-1]){
                dfs(i,m-1,n,m,board,vis);
            }
        }
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                if(board[i][j]=='O' && !vis[i][j]){
                    board[i][j] = 'X';
                }
            }
        }
    }
};