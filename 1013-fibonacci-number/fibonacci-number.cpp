class Solution {
public:
    int fib(int n) {
        //     if(n==0 || n==1) return n;
        //     int arr[n+1];
        //     arr[0] = 0, arr[1] = 1;
        //     for(int i=2; i<n+1; i++){
        //         arr[i] = -1;
        //     }
        //     return helper(arr, n);
        // }
        // int helper(int arr[], int n){
        //     if(arr[n] != -1) return arr[n];
        //     else{
        //         return arr[n] = helper(arr, n-1) + helper(arr, n-2);
        //     }
        // }
        if(n==0){
            return 0;
        }
        if(n==1){
            return 1;
        }
        int f1 = 0, f2 = 1;
        int fib3, ans;
        for(int i=2; i<n+1; i++){
            fib3 = f2+f1;
            int temp = f2;
            f2 = fib3;
            f1 = temp;
        }
        return fib3;
    }
};