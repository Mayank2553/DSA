class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        // int n = nums.size();
        // int count = 0;
        // int maxi = 0;
        // for(int i=0; i<n; i++){
        //     if(nums[i] == 1){
        //         count += 1;
        //         maxi = max({count, maxi});
        //     }
        //     else{
        //         count = 0;
        //     }
        // }
        // return maxi;

        int i, count=0, max=0;
        for(i=0 ; i<nums.size() ; i++)
        {
            if(nums[i]==1)
            {
                count++;
                if(count>max)
                {
                    max = count;
                }
            }
            else
            {
                count=0;
            }
        }
        return max;
    }
};