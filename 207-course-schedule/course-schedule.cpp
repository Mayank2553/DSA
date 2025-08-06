class Solution {
public:
    vector<int> topoSort(int V, vector<int> adj[]){
        vector<int> inDegree(V, 0);

        for(int i=0; i<V; i++){
            for(auto it : adj[i]) inDegree[it]++;
        }

        vector<int> ans;
        queue<int> q;
        for(int i=0; i<V; i++){
            if(inDegree[i] == 0) q.push(i);
        }

        while(!q.empty()){
            int node = q.front();
            q.pop();
            ans.push_back(node);

            for(auto it: adj[node]){
                inDegree[it]--;

                if(inDegree[it] == 0){
                    q.push(it);
                }
            }
        }
        return ans;
    }

    bool canFinish(int numCourses, vector<vector<int>>& prerequisites) {

        if(prerequisites.size() == 0) return true;
        
        vector<int> adj[numCourses]; 

        for(auto it : prerequisites) {
            int u = it[0];
            int v = it[1];
            
            // Add the edge v-> u
            adj[v].push_back(u);
        }

        vector<int> topo = topoSort(numCourses, adj);

        if(topo.size()<numCourses) return false;

        return true;
    }
};