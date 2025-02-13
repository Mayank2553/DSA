//https://leetcode.com/problems/factorial-trailing-zeroes/

class Solution {
public:

    int climbHelper(int n, vector<int>& memo){
        if(n==1) return 1;
        if(n==2) return 2;

        if(memo[n] != -1) return memo[n];

        memo[n] = climbHelper(n-1, memo) + climbHelper(n-2, memo);
        return memo[n];
    }

    int climbStairs(int n) {
        // if(n==0){
        //     return 0;
        // }
        // if(n==1){
        //     return 1;
        // }
        // int ans = 0, s1 = 0, s2 = 1;
        // for(int i=1; i<=n; i++){
        //     ans = s1+s2;
        //     s1 = s2;
        //     s2 = ans;
        // }
        // return ans;

        vector<int> memo(n+1, -1);
        return climbHelper(n, memo);
    }
};
