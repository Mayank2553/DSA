class Solution {
public:
    int balancedString(string s) {
        int n = s.size();
        int need = n / 4;
        vector<int> freq(128, 0);

        // 1) full string frequency
        for (char c : s) freq[(int)c]++;

        // If already balanced (all <= need), answer is 0
        if (freq['Q'] <= need && freq['W'] <= need && freq['E'] <= need && freq['R'] <= need)
            return 0;

        int ans = n;        // worst-case: replace whole string
        int L = 0;

        for (int R = 0; R < n; ++R) {
            // include s[R] in the window => remove it from "outside" counts
            freq[(int)s[R]]--;

            // While outside is valid (all chars <= need), try to shrink from left
            while (L <= R &&
                   freq['Q'] <= need &&
                   freq['W'] <= need &&
                   freq['E'] <= need &&
                   freq['R'] <= need) {
                ans = min(ans, R - L + 1);     // current window is valid
                // move left edge right: put s[L] back into outside
                freq[(int)s[L]]++;
                ++L;
            }
        }

        return ans;
    }
};