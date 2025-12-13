class Solution {
public:
    vector<vector<int>> adj;
    string labels;
    int ans = 1;
    int dfs(int u){
        int largest = 0; //to return to parent
        int secondLargest = 0; // to update the longest chain
        
        for(int v: adj[u]){
            int childLen = dfs(v);
            if(labels[v] == labels[u]) continue;
            
            if(childLen > largest){
                secondLargest = largest;
                largest = childLen;
            } else if(childLen > secondLargest){
                secondLargest = childLen;
            }
        }
        ans = max(ans, largest+secondLargest+1);
        return largest+1;
    }
    int longestPath(vector<int>& parent, string s) {
        int n = parent.size();
        adj.assign(n, {});
        labels = s;
        for(int i=1; i<n; i++){
            adj[parent[i]].push_back(i);
        }
        dfs(0);
        return ans;
    }   
};