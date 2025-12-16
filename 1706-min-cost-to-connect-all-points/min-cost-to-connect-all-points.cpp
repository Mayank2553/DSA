class Solution {
public:
    struct DSU{
        vector<int> parent, rank;
        DSU(int n){
            parent.resize(n);
            rank.resize(n, 0);
            for(int i=0; i<n; i++){
                parent[i] = i;
            }
        }
        int find(int x){
            if(parent[x] != x){
                parent[x] = find(parent[x]);
            }
            return parent[x];
        }
        bool unite(int x, int y){
            x = find(x);
            y = find(y);
            if(x == y) return false;

            if(rank[x] < rank[y]) swap(x, y);
            parent[y] = x;
            if(rank[x] == rank[y]) rank[x]++;
            return true;
        }
    };
    int minCostConnectPoints(vector<vector<int>>& points) {
        int n = points.size();
        vector<tuple<int, int, int>> edges;

        //step 1. generate all edges
        for(int i=0; i<n; i++){
            for(int j=i+1; j<n; j++){
                int cost = abs(points[i][0] - points[j][0]) + abs(points[i][1] - points[j][1]);
                edges.push_back({cost, i, j});
            }
        }

        //step 2: sort edges by cost
        sort(edges.begin(), edges.end());

        //step3: kruskal
        DSU dsu(n);
        int mstCost = 0, edgesUsed = 0;

        for(auto &[cost, u, v]: edges){
            if(dsu.unite(u, v)){
                mstCost += cost;
                edgesUsed++;
                if(edgesUsed == n-1){
                    break;
                }
            }
        }
        return mstCost;
    }
};