class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        //brute force approach
        set<int> st;
        for(int i=0; i<nums.size(); i++){
            st.insert(nums[i]);
        }
        int index = 0;
        for(auto i: st){
            nums[index] = i;
            index++;
        }
        return index;
        
        // int j = 1;
        // for(int i = 1; i < nums.size(); i++){
        //     if(nums[i] != nums[i - 1]){
        //         nums[j] = nums[i];
        //         j++;
        //     }
        // }
        // return j;
    }
};