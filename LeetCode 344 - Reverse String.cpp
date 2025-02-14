// https://leetcode.com/problems/reverse-string/

class Solution {
public:
    void reverseString(vector<char>& s, int i = 0) {
        
        // while(i<j){
        //     swap(s[i], s[j]);
        //     i++;
        //     j--;
        // }
        // for(auto i: s){
        //     cout<<i;
        // }
        int j = s.size() - i - 1;
        if(i >= j){
            return;
        }
        swap(s[i], s[j]);
        reverseString(s, i+1);
    }
};
