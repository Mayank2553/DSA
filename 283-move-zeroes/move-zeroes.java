class Solution {
    public void moveZeroes(int[] nums) {
        int i=0;
        int j=1;
        while(nums.length >1 && i<=j && j<nums.length){
            if(nums[i] == 0 && nums[j] != 0){
                int temp = nums[i];
                nums[i]=nums[j];
                nums[j]=temp;
                i++;
                j++;
            } else if(nums[i] == 0 && nums[j] == 0){
                j++;
            } else if(nums[i] != 0 && nums[j] == 0){
                i++;
            }else{
                i++;
                j++;
            }
        }
    }
}