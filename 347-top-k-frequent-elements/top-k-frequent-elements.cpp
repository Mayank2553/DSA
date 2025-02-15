class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        int n = nums.size();

        unordered_map<int, int> m;
        vector<int> ans;
        for (int i : nums) m[i]++;


        vector<pair<int, int>> vec(m.begin(), m.end());
        sort(vec.begin(), vec.end(), [](auto &a, auto &b){
            return a.second > b.second;
        });


        for(auto i=0; i<k; i++){
            ans.push_back(vec[i].first);
        }

        return ans;
    }
};