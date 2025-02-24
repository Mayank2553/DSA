class Solution {
public:
    int majorityElement(vector<int>& nums) {
        
        //1. Brute Force Approach
        // int n = nums.size();
        // for(int i=0; i<n; i++){
        //     int count = 0;
        //     for(int j=0; j<n; j++){
        //         if(nums[i] == nums[j]){
        //             count++;
        //         }
        //     }
        //     if(count>n/2){
        //         return nums[i];
        //     }
        // }
        // return -1;

        //2. Better Approach - O(NlogN)
        int n = nums.size();
        map<int, int> mp;
        for(auto it: nums){
            mp[it]++;
        }
        for(auto it: mp){
            if(it.second > (n/2)){
                return it.first;
            }
        }
        return -1;
    }
};