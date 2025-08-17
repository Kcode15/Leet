class Solution {
public:
    vector<vector<int>> floodFill(vector<vector<int>>& image, int sr, int sc, int color) {
        int n = image.size();
        int m = image[0].size();
        queue<pair<int,int>> q;
        q.push({sr,sc});
        int initcolor=image[sr][sc];
        image[sr][sc]=color;
        vector<int> dx = {0,0,1,-1};
        vector<int> dy = {1,-1,0,0};
        while(!q.empty()){
            int r = q.front().first;
            int c = q.front().second;
            q.pop();
            for(int i=0;i<4;i++){
                int cx = r+dx[i];
                int cy = c+dy[i];
                if(cx>=0 && cx<n && cy>=0 && cy<m && image[cx][cy]!=color && image[cx][cy]==initcolor){
                    q.push({cx,cy});
                    image[cx][cy] = color;
                }
            }
        }
        return image;
    }
};