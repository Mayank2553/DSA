class Solution {
public:
    int balancedString(string s) {
        int n = s.size();
        int need = n/4;

        unordered_map<char, int> map;
        for(char c: s) map[c]++;

        int ans = n, l = 0;
        for(int r=0; r<n; r++){
            map[s[r]]--; //include s[r] in window

            while(l < n && map['Q'] <= need && map['W'] <= need 
            && map['E'] <= need && map['R'] <= need) {
                ans = min(r-l+1, ans);
                map[s[l]]++; //remove s[l] from window
                l++;
            }
        }
        return ans;
    }
};