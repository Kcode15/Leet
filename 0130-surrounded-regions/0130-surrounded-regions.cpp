class Solution {
public:
    void dfs(int i,int j,int n,int m,vector<vector<char>>& board, vector<vector<int>>& vis){
        if(i < 0 || i >= n || j < 0 || j >= m){
            return;
        }
        if(board[i][j] != 'O' || vis[i][j] == 1){
            return;
        } 
        board[i][j] = '#';
        vis[i][j] = 1;
        dfs(i-1,j,n,m,board,vis);
        dfs(i,j-1,n,m,board,vis);
        dfs(i+1,j,n,m,board,vis);
        dfs(i,j+1,n,m,board,vis);
    }
    void solve(vector<vector<char>>& board) {
        int n = board.size();
        int m = board[0].size();
        vector<vector<int>> vis(n,vector<int>(m,0));
        for(int i = 0; i < n; i++) {
            if(board[i][0] == 'O'){
                dfs(i, 0, n, m, board, vis);
            } 
            if(board[i][m-1] == 'O'){
                dfs(i, m-1, n, m, board, vis);
            } 
        }
        for(int j = 0; j < m; j++) {
            if(board[0][j] == 'O'){
                dfs(0, j, n, m, board, vis);
            } 
            if(board[n-1][j] == 'O'){
                dfs(n-1, j, n, m, board, vis);
            } 
        }

        for(int i = 0; i < n; i++) {
            for(int j = 0; j < m; j++) {
                if(board[i][j] == 'O'){
                    board[i][j] = 'X'; // surrounded
                } 
                if(board[i][j] == '#'){
                    board[i][j] = 'O'; // safe
                } 
            }
        }
    }
};