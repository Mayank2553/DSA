class Solution {
public:
    bool isValid(string s) {
        stack<int> stk;
        for(int i=0; i<s.size(); i++){
            if(s[i] == '(' || s[i] == '{' || s[i] == '['){
                stk.push(s[i]);
            } else if(s[i] == ')'){
                if(!stk.empty() && stk.top() == '('){
                    stk.pop();
                } else{
                    stk.push(s[i]);
                }
            }
            else if(s[i] == '}'){
                if(!stk.empty() && stk.top() == '{'){
                    stk.pop();
                } else{
                    stk.push(s[i]);
                }
            }
            else if(s[i] == ']'){
                if(!stk.empty() && stk.top() == '['){
                    stk.pop();
                } else{
                    stk.push(s[i]);
                }
            }
        }
        return stk.empty();
    }
};