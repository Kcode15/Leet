class Solution {
public:
    bool dfs(int node, vector<vector<int>>& graph, vector<int>& state) {
        if (state[node] != 0) {
            return state[node] == 2; // already determined safe
        }
        
        state[node] = 1; // visiting
        for (int nei : graph[node]) {
            if (state[nei] == 1) return false; // cycle found
            if (!dfs(nei, graph, state)) return false;
        }
        state[node] = 2; // safe
        return true;
    }
    
    vector<int> eventualSafeNodes(vector<vector<int>>& graph) {
        int n = graph.size();
        vector<int> state(n, 0); // 0=unvisited, 1=visiting, 2=safe
        vector<int> ans;
        
        for (int i = 0; i < n; i++) {
            if (dfs(i, graph, state)) {
                ans.push_back(i);
            }
        }
        return ans;
    }
};
