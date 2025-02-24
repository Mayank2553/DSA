class Solution {
public:
    int majorityElement(vector<int>& nums) {

        //3. Optimal Approach - Moore's Voting Algo
        int n = nums.size();
        int count = 0;
        int el;
        for(int i=0; i<n; i++){
            if(count == 0){
                count = 1;
                el = nums[i];
            }
            else if(nums[i] == el) count++;
            else count--;
        }

        int cnt1=0;
        for(int i=0; i<n; i++){
            if(nums[i] == el) cnt1++;
        }

        if(cnt1 > (n/2)) return el;
        return -1;
        
        // 1. Brute Force Approach
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

        //2. Better Approach 
        // int n = nums.size();
        // map<int, int> mp;
        // for(auto it: nums){
        //     mp[it]++;
        // }
        // for(auto it: mp){
        //     if(it.second > (n/2)){
        //         return it.first;
        //     }
        // }
        // return -1;
        // Tc - O(N), SC - O(N)

        //3. Optimal Approach

    }
};