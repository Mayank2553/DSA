class Solution {
public:
    int minimumDistance(vector<vector<int>>& points) {
        int n = points.size();
        vector<int> p(n), q(n);

        // Compute transformed coordinates
        for (int i = 0; i < n; i++) {
            p[i] = points[i][0] + points[i][1];
            q[i] = points[i][0] - points[i][1];
        }

        // Helper to get top 2 max and min
        auto getExtremes = [&](vector<int>& arr) {
            int max1 = INT_MIN, max2 = INT_MIN;
            int min1 = INT_MAX, min2 = INT_MAX;

            for (int x : arr) {
                if (x > max1) {
                    max2 = max1;
                    max1 = x;
                } else if (x > max2) {
                    max2 = x;
                }

                if (x < min1) {
                    min2 = min1;
                    min1 = x;
                } else if (x < min2) {
                    min2 = x;
                }
            }
            return array<int,4>{max1, max2, min1, min2};
        };

        auto P = getExtremes(p);
        auto Q = getExtremes(q);

        int ans = INT_MAX;

        for (int i = 0; i < n; i++) {
            int curMaxP = (p[i] == P[0] ? P[1] : P[0]);
            int curMinP = (p[i] == P[2] ? P[3] : P[2]);
            int curMaxQ = (q[i] == Q[0] ? Q[1] : Q[0]);
            int curMinQ = (q[i] == Q[2] ? Q[3] : Q[2]);

            int curDist = max(curMaxP - curMinP, curMaxQ - curMinQ);
            ans = min(ans, curDist);
        }

        return ans;
    }
};