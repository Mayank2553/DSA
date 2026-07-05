class Solution {
    public int[] twoSum(int[] nums, int target) {
        int n = nums.length;
        
        Map<Integer, Integer> numMap = new HashMap<>();
        for(int i=0; i<n; i++){
            numMap.put(nums[i], i);
        }

        for(int i=0; i<n; i++){
            int comp = target - nums[i];
            if(numMap.containsKey(comp) && numMap.get(comp) != i){
                return new int[]{i, numMap.get(comp)};
            }
        }

        return new int[]{};

        // for(int i=0; i<n-1; i++){
        //     for(int j=i+1; j<n; j++){
        //         if(nums[i] + nums[j] == target){
        //             return new int[]{i,j};
        //         }
        //     }
        // }
        // return new int[]{};
    }
}