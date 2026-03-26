class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        // unordered_map<int, int> mpp;
        // for(int i=0; i<nums.size(); i++){
        //     mpp[nums[i]] = i;
        // }
        // for(int i=0; i<nums.size(); i++){
        //     int complement = target - nums[i];
        //     if(mpp.find(complement) != mpp.end() && mpp[complement] != i){
        //         return {i, mpp[complement]};
        //     }
        // }
        // return {};
        
        //brute force
        int n = nums.size();
        for(int i=0; i<n-1; i++){
            for(int j=i+1; j<n; j++){
                if(nums[i] + nums[j] == target){
                    return {i, j};
                }
            }
        }
        return {};

    }
};