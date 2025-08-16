class Solution {
private:
    void bfs(const vector<vector<int>>& adj, vector<int>& vis, int node) {
        queue<int> q;
        vis[node] = 1; // Mark start as visited
        q.push(node);
        
        while (!q.empty()) {
            int k = q.front();
            q.pop();
            for (int j = 0; j < adj[k].size(); j++) {
                if (adj[k][j] == 1 && !vis[j]) {
                    vis[j] = 1;
                    q.push(j);
                }
            }
        }
    }

public:
    int findCircleNum(const vector<vector<int>>& adj) {
        vector<int> vis(adj.size(), 0);
        int count = 0;
        for (int i = 0; i < adj.size(); i++) {
            if (!vis[i]) {
                count++;
                bfs(adj, vis, i);
            }
        }
        return count;
    }
};