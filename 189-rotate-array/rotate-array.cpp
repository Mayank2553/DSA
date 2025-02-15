class Solution {
public:
    void rotate(vector<int>& nums, int k) {
        int n = nums.size();
        k = k%n;
        reverse(nums.begin(), nums.end());  //Reverse the entire array
        reverse(nums.begin(), nums.begin()+k);  //Reverse the array from start to 0 to first k elements
        reverse(nums.begin()+k, nums.end());  //Reverse the array from k to end elements
    }
};