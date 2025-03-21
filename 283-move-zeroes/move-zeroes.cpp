class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        int n = nums.size();

        //Brute Force - using a temporary array to store non zeroes
        // int nz = 0;
        // vector<int> temp;
        // for(int i=0; i<n; i++){
        //     if(nums[i] != 0){
        //         temp.push_back(nums[i]);
        //         nz++;
        //     }
        // }
        // for(int i=0; i<temp.size(); i++){
        //     nums[i] = temp[i];
        // }
        // for(int i = nz; i<n; i++){
        //     nums[i] = 0;
        // }

        //Optimal - Two Pointers Approach
        int j = 0;
        for(int i=0; i<n; i++){
            if(nums[i] != 0){
                swap(nums[i], nums[j]);
                j++;
            }
        }
    }
};