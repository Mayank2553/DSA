class Solution {
public:
    // int f(int count, int n){
    //     if(count == n) return 0;
    //     if(count  > n) return INT_MAX/2;
    //     int copyPaste = 2 + f(count*2, n);
    //     return min
    // }
    int minSteps(int n) {
        if (n == 1) return 0;
        
        int steps = 0;
        int factor = 2;
        
        while (n > 1) {
            while (n % factor == 0) {
                steps += factor;
                n /= factor;
            }
            factor++;
        }
        
        return steps;
    }
};