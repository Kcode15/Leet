class Solution {
public:
    int shortestPathBinaryMatrix(vector<vector<int>>& grid) {
        int n = grid.size();
        if(grid[0][0]!=0 || grid[n-1][n-1]!=0){
            return -1;
        }
        if(n==1){
            return 1;
        }
        vector<int> dx = {0,1,-1,0,-1,-1,1,1};
        vector<int> dy = {1,0,0,-1,-1,1,1,-1};
        // queue stores distance and the row and column number
        queue<pair<int,pair<int,int>>> q;
        q.push({1,{0,0}});
        vector<vector<int>> dist(n,vector<int>(n,1e9));
        
        while(!q.empty()){
            int r1 = q.front().second.first;
            int c1 = q.front().second.second;
            int dis = q.front().first;
            if(r1==n-1 && c1==n-1){
                return dist[n-1][n-1];
            }
            q.pop();
            for(int i=0;i<8;i++){
                int cx = r1+dx[i];
                int cy = c1+dy[i];
                if(cx<n && cx>=0 && cy<n && cy>=0 && grid[cx][cy]!=1 && dis+1<dist[cx][cy]){
                    dist[cx][cy] = dis+1;
                    q.push({dist[cx][cy],{cx,cy}});
                }
            }
        }
        return -1;
    }
};