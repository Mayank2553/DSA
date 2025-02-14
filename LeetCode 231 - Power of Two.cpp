// https://leetcode.com/problems/power-of-two/

class Solution {
public:
    bool isPowerOfTwo(int n) {
        // int power = pow(2, 31);
        // int flag = 0;
        // for(int i=0; i<pow(2, 31); i++){
        //     if(n % (2^i)){
        //         flag = 1;
        //         break;
        //     }
        // }

        // if(flag==0){
        //     return true;
        // }
        // else{
        //     return false;
        // }

        //recursive
        bool ans;
        if(n==0){
            return false;
        }else if(n == 1){
            return true;
        }
        else{
            return (n%2==0) && isPowerOfTwo(n/2);
        }
    }
};
