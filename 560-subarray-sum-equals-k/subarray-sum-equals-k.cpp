class Solution {
public:
    int subarraySum(vector<int>& nums, int k) {
        //Brute Force Approach
        // int count = 0;
        // for(int i=0; i<nums.size(); i++){
        //     int sum = 0;
        //     for(int j = i; j<nums.size(); j++){
        //         sum += nums[j];
        //         if(sum == k){
        //             count++;
        //         }
        //     }
        // }
        // return count;
        
        
        unordered_map<int, int> prefixSum;
        prefixSum[0] = 1;  //Base Case: A subarray sum starting at index 0
        int sum = 0, count = 0;
        for(int num: nums){
            sum += num;  //Compute running sum

            if(prefixSum.find(sum - k) != prefixSum.end()){
                count += prefixSum[sum-k]; //Add all occurences of (sum - k)
            }
            prefixSum[sum]++;   //Store the current sum in map
        }
        return count;
    }
};