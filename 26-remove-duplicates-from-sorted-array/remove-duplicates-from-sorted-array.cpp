class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        //brute force approach
        // set<int> st;
        // for(int i=0; i<nums.size(); i++){
        //     st.insert(nums[i]);
        // }
        // int index = 0;
        // for(auto i: st){
        //     nums[index] = i;
        //     index++;
        // }
        // return index;
        
        // Optimal - two pointers approach
        int i=0;
        for(int j=0; j<nums.size(); j++){
            if(nums[j] != nums[i]){
                nums[i+1] = nums[j];
                i++;
            }
        }
        return i+1;

    }
};