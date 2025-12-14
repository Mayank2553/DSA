class Solution {
public:
    int maxEnvelopes(vector<vector<int>>& env) {
        sort(env.begin(), env.end(), [](auto &a, auto &b){
            if(a[0] != b[0]) return a[0] < b[0];
            return a[1] > b[1];
        });

        vector<int> lis;
        for(auto &e: env){
            int h = e[1];
            auto it = lower_bound(lis.begin(), lis.end(), h);
            if(it == lis.end()) lis.push_back(h);
            else *it = h;
        }
        return lis.size();
    }
};