// https://leetcode.com/problems/find-the-difference/

class Solution {
public:
    char findTheDifference(string s, string t) {
        int result = 0;
        for (int i = 0; i < s.length(); i++) result ^= s.at(i);  //all characters that appear in both strings will cancel out.
        for (int i = 0; i < t.length(); i++) result ^= t.at(i);  //only character left is the extra
        return (char) result; 
    }
};
