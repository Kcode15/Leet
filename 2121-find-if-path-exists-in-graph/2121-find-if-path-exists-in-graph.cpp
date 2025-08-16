class Solution {
public:
    bool dfs(int node,int destination,unordered_map<int,vector<int>> &graph,vector<int> &visited){
        if(node == destination){
            return true;
        }
        visited[node]=1;
        for(int ngb:graph[node]){
            if(visited[ngb]!=1){
               if(dfs(ngb,destination,graph,visited)){
                    return true;
               } 
            }
        }
        return false;
    }
    bool validPath(int n, vector<vector<int>>& edges, int source, int destination) {
        unordered_map<int,vector<int>> graph;
        for(int i=0;i<edges.size();i++){
            int a = edges[i][0];
            int b = edges[i][1];
            graph[a].push_back(b);
            graph[b].push_back(a);
        }
        vector<int> visited(n);
        return dfs(source,destination,graph,visited);
    }
};