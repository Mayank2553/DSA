class Solution {
public:
    void sortColors(vector<int>& nums) {
        //Better Approach
        // int c0 = 0, c1 = 0, c2 = 0;
        // for(int i=0; i<nums.size(); i++){
        //     if(nums[i]==0) c0++;
        //     else if(nums[i]==1) c1++;
        //     else c2++;
        // }

        // int idx = 0;

        // for(int i=0; i<c0; i++){
        //     nums[idx++] = 0;
        // }
        // for(int i=0; i<c1; i++){
        //     nums[idx++] = 1;
        // }
        // for(int i=0; i<c2; i++){
        //     nums[idx++] = 2;
        // }

        //Optimal Approach - Dutch National Flag Algo
        int low = 0, mid = 0, high = nums.size()-1;
        while(mid<=high){
            if(nums[mid] == 0){
                swap(nums[low], nums[mid]);
                low++;
                mid++;
            }
            else if(nums[mid] == 1){
                mid++;
            }
            else{
                swap(nums[mid], nums[high]);
                high--;
            }
        }
    }
};