class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int n = nums.size();
        int sum = 0, result = INT_MIN;
        for(int i=0; i<n; i++){
            if(sum < 0) sum = 0;
            sum += nums[i];
            result = max(sum, result);
        }
        return result;
    }
};