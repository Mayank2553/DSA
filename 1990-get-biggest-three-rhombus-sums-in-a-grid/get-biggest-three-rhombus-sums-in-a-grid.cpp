class Solution {
public:
    vector<int> getBiggestThree(vector<vector<int>>& grid) {
        int n = static_cast<int>(grid.size()); 
        int m = static_cast<int>(grid[0].size());
        int top[3] = {0, 0, 0};

        auto add = [&](int val){
            if(val == top[0] || val == top[1] || val == top[2]) return;
            if(val > top[0]){
                top[2] = top[1];
                top[1] = top[0];
                top[0] = val;
            } else if (val > top[1]){
                top[2] = top[1];
                top[1] = val;
            } else if(val > top[2]){
                top[2] = val;
            }
        };

        for(int i=0; i<n; i++){
            for(int j=0; j<m; j++){
                add(grid[i][j]);

                // int top = i, bottom = (m-1)-i;
                // int left = j, right = (n-1)-j;
                int maxK = min({i, n-1-i, j, m-1-j}); 

                for(int k=1; k<=maxK; ++k){
                    int currentSum = 0;
                    for(int step=0; step<k; step++){
                        currentSum += grid[i - k + step] [j + step];
                        currentSum += grid[i + step] [j + k - step];
                        currentSum += grid[i + k - step] [j - step];
                        currentSum += grid[i - step] [j - k + step];
                    }
                    add(currentSum);
                }
            }
        }

        vector<int> ans;
        for(int i=0; i<3; i++){
            if(top[i] > 0){
                ans.push_back(top[i]);
            }
        }
        return ans;
    }
};