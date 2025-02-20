class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        //1. Brute Force
        // vector<int> ans;
        // int n = nums.size();
        // for(int i=0; i<n; i++){
        //     for(int j=i+1; j<n; j++){
        //         if(nums[i] + nums[j] == target){
        //             ans.push_back(i);
        //             ans.push_back(j);
        //         }
        //     }
        // }
        // return ans;

        //Better Solution
        int n = nums.size();
        map<int, int> m;
        vector<int> ans;

        for(int i=0; i<n; i++){
            int comp = target - nums[i];
            if(m.count(comp)){
                return {m[comp], i};
            }
            m[nums[i]] = i;
        }
        return {};
    }
};