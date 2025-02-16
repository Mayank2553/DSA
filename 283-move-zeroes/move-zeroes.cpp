class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        int n = nums.size();
        int nz = 0;
        vector<int> temp;
        for(int i=0; i<n; i++){
            if(nums[i] != 0){
                temp.push_back(nums[i]);
                nz++;
            }
        }
        for(int i=0; i<temp.size(); i++){
            nums[i] = temp[i];
        }
        for(int i = nz; i<n; i++){
            nums[i] = 0;
        }
    }
};