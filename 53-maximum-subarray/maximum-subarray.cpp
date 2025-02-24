class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        //1. Brute Force Approach

        //2. Better Approach
        int n = nums.size();
        int maxSum = INT_MIN, currentSum = 0;
        for(int i=0; i<n; i++){
            currentSum += nums[i];

            if(currentSum > maxSum){
                maxSum = currentSum;
            }

            if(currentSum < 0){
                currentSum = 0;
            }
        }
        return maxSum;
    }
};