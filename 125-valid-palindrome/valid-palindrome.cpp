class Solution {
public:
    bool isPalindrome(string s) {
        string filtered;
        
        for(char c: s){
            if(isalnum(c)){
                filtered += tolower(c);
            }
        }
        int i = 0, j = filtered.size()-1;
        while(i<j){
            if(filtered[i] != filtered[j]){
                return false;
            }
            i++;
            j--;
        }
        return true;
    }
};