class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        vector<int> chars;
        int n = s.size();
        int l = 0, r = 0, maxLen = 0;
        int len = 0;
        set<char> st;
        while (r < n) {
            while (st.find(s[r]) != st.end()) {
                st.erase(s[l]);
                l++;
            }
            st.insert(s[r]);
            maxLen = max(maxLen, r - l + 1);
            r++;
        }
        return maxLen;
    }
};