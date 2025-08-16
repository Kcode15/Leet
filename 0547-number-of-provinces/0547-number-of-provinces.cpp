class Solution {
public:
    void dfs(int node,unordered_map<int,vector<int>> &graph,vector<int> &visited){
        visited[node]=1;
        for(int ngb: graph[node]){
            if(visited[ngb]!=1){
                dfs(ngb,graph,visited);
            }
        }
    }
    int findCircleNum(vector<vector<int>>& isConnected) {
        int n = isConnected.size();
        unordered_map<int,vector<int>> graph;
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < n; j++) {
                if (isConnected[i][j] == 1 && i != j) {
                    graph[i].push_back(j);
                }
            }
        }
        int count = 0;
        vector<int> visited(n,0);
        for(int i=0;i<n;i++){
            if(visited[i]==0){
                dfs(i,graph,visited);
                count++;
            }
        }
        return count;
    }
};