class Solution {
public:
    int subarraySum(vector<int>& nums, int k) {
        //Brute Force Approach
        int count = 0;
        for(int i=0; i<nums.size(); i++){
            int sum = 0;
            for(int j = i; j<nums.size(); j++){
                sum += nums[j];
                if(sum == k){
                    count++;
                }
            }
        }
        return count;
        
        
        // unordered_map<int, int> m;
        // subNum[0] = 1;
        // int total = 0, count = 0;
        // for(int i: nums){
        //     total += n;

        //     if(m)
        // }
    }
};