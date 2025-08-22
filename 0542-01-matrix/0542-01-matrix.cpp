class Solution {
public:
    vector<vector<int>> updateMatrix(vector<vector<int>>& mat) {
        int n = mat.size();
        int m = mat[0].size();
        vector<vector<int>> distMatrix(n,vector<int>(m,0));
        vector<vector<int>> vis(n,vector<int>(m,0));
        queue<pair<pair<int,int>,int>> q;
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                if(mat[i][j]==0){
                    distMatrix[i][j] = 0;
                    q.push({{i,j},0});
                    vis[i][j]=1;
                }
            }
        }
        vector<int> dx = {0,0,1,-1};
        vector<int> dy = {1,-1,0,0};
        while(!q.empty()){
            int r = q.front().first.first;
            int c = q.front().first.second;
            int cnt = q.front().second;
            distMatrix[r][c]= cnt;
            q.pop();
            for(int i=0;i<4;i++){
                int cx = r+dx[i];
                int cy = c+dy[i];
                if(cx>=0 && cx<n && cy>=0 && cy<m && !vis[cx][cy]){
                    q.push({{cx,cy},cnt+1});
                    vis[cx][cy] =1;
                }
            }
        }
        return distMatrix;
    }
};