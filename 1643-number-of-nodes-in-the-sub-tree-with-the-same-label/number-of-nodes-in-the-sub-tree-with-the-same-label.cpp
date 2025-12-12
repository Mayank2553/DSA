class Solution {
public:
//Approach-1 (DFS - adding counts from children at every node)
    vector<int> dfs_count(int u, int parent, unordered_map<int, vector<int>> &adj, string &labels, vector<int> &ans) {
        vector<int> my_count(26, 0);
        char myLabel = labels[u];

        my_count[myLabel - 'a'] = 1;

        for (int v : adj[u]) {
            if (v == parent)
                continue;
            
            vector<int> childCnt(26, 0);
            childCnt = dfs_count(v, u, adj, labels, ans);
            // merge child counts into current
            for (int i = 0; i < 26; ++i)
                my_count[i] += childCnt[i];
        }
        
        ans[u] = my_count[myLabel - 'a'];
        return my_count;
    }

    vector<int> countSubTrees(int n, vector<vector<int>>& edges, string labels) {
        unordered_map<int, vector<int>> adj;
        
        for(auto &vec : edges) {
            int u = vec[0];
            int v = vec[1];
            
            adj[u].push_back(v);
            adj[v].push_back(u);
        }
        
        vector<int> result(n, 0);
        
        dfs_count(0, -1, adj, labels, result);
        return result;
    }
};