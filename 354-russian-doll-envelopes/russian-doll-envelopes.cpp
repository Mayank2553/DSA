class Solution {
public:
    int lengthOfLIS(vector<int>& nums) {
        vector<int> lis;
        for (int i = 0; i < nums.size(); i++) {
            auto it = lower_bound(lis.begin(), lis.end(), nums[i]);
            if (it == lis.end()) {
                lis.push_back(nums[i]);
            } else {
                *it = nums[i];
            }
        }
        return lis.size();
    }

    int maxEnvelopes(vector<vector<int>>& env) {
        sort(env.begin(), env.end(), [](auto& a, auto& b) {
            if (a[0] == b[0])
                return a[1] > b[1];
            return a[0] < b[0];
        });

        vector<int> lis;
        for (auto& e : env) {
            int h = e[1];
            auto it = lower_bound(lis.begin(), lis.end(), h);
            if (it == lis.end()) {
                lis.push_back(h);
            } else {
                *it = h;
            }
        }
        return lis.size();
    }
};