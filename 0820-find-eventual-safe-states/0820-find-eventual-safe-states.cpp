class Solution {
public:
    vector<int> eventualSafeNodes(vector<vector<int>>& graph) {
        int V = graph.size();
        vector<int> indegree(V,0);
        vector<vector<int>> revGraph(V);
        for(int i=0;i<V;i++){
            for(auto it : graph[i]){
                revGraph[it].push_back(i);
                indegree[i]++;
            }
        }
        queue<int> q;
        for(int i=0;i<V;i++){
            if(indegree[i]==0){
                q.push(i);
            }
        }
        while(!q.empty()){
            int node = q.front();
            q.pop();
            // As node is in topo sort so remove it from indegree;
            for(auto it: revGraph[node]){
                indegree[it]--;
                if(indegree[it]==0){
                    q.push(it);
                }
            }
        }
        vector<int> ans;
        for(int i=0;i<V;i++){
            if(indegree[i]==0){
                ans.push_back(i);
            }
        }
        return ans;
    }
};