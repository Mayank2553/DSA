class Solution {
public:
    vector<int> findDuplicates(vector<int>& nums) {
        vector<int>ans;
        int n=size(nums);
        for(int i=0;i<n;i++){
            int x=abs(nums[i]);  //take absolute value nums[i], store it in x
            if(nums[x-1]<0){    //if element - 1 is negative, it is duplicate
                
                ans.push_back(x);   //push element to the array
            }
            nums[x-1]*=-1;
        }
        return ans;
    }
};