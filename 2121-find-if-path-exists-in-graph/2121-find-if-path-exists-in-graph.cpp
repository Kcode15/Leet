class Solution {
public:
    void dfs(int node,int destination,unordered_map<int,vector<int>> &graph,vector<int> &visited){
        visited[node]=1;
        for(int ngb:graph[node]){
            if(visited[ngb]==0){
                dfs(ngb,destination,graph,visited);
            }
        }
    }
    bool validPath(int n, vector<vector<int>>& edges, int source, int destination) {
        unordered_map<int,vector<int>> graph;
        for(int i=0;i<edges.size();i++){
            int a = edges[i][0];
            int b = edges[i][1];
            graph[a].push_back(b);
            graph[b].push_back(a);
        }
        vector<int> visited(n,0);
        dfs(source,destination,graph,visited);
        if(visited[destination]==1){
            return true;
        }
        return false;
    }
};