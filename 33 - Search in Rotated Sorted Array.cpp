//https://leetcode.com/problems/find-first-and-last-position-of-element-in-sorted-array/

class Solution {
public:
    int search(vector<int>& nums, int k) {
        int high = nums.size()-1, low = 0;
        while(low<=high){
            int mid = (low+high)/2;
            if(nums[mid] == k){
                return mid;
            } 
            else if(nums[low] <= nums[mid]){
                if(nums[low] <= k && k <= nums[mid]){
                    high = mid - 1;
                }
                else{
                    low = mid+1;
                } 
            }
            else{
                if(nums[mid] <= k && k <= nums[high]){
                    low = mid+1;
                }
                else{
                    high = mid-1;
                }
            }
        }
        return -1;
    }
};
