class Solution {
public:
    bool dfs(int node,vector<vector<int>>& graph,vector<int>& vis,vector<int>& pathVis){
        vis[node]=1;
        pathVis[node] =1;
        for(auto ngb:graph[node]){
            //when the node is not visited
            if(!vis[ngb]){
                if(dfs(ngb,graph,vis,pathVis) == true){
                    return true;
                };
            }
            // if the node has been previously visited
            // but it has to be on same path;
            else if(pathVis[ngb]){
                return true;
            }
        }
        vis[node] = 2;
        pathVis[node] = 0;
        return false;
    }
    vector<int> eventualSafeNodes(vector<vector<int>>& graph) {
        int V = graph.size();
        vector<int> pathVis(V,0);
        vector<int> vis(V,0);
        for(int i=0;i<V;i++){
            if(!vis[i]){
                dfs(i,graph,vis,pathVis);
            }
        }
        vector<int> ans;
        for(int i=0;i<V;i++){
            if(vis[i]==2){
                ans.push_back(i);
            }
        }
        return ans;
    }
};