class Solution {
public:
    int smallestDivisor(vector<int>& nums, int threshold) {
        long long maxElement = *max_element(nums.begin(), nums.end());
        int low=1,high=maxElement, ans=-1;
        while(low<=high){
            int mid=low+(high-low)/2;
            if(sumOfDiv(nums,mid, threshold)<=threshold){
                ans=mid;
                high=mid-1;
            }
            else{
                low=mid+1;
            }
        }
        return ans;
    }

    int sumOfDiv(vector<int>&nums, int div, int threshold){
        long long sum=0;
        int n=nums.size();
        for(int i=0;i<n;i++){
           sum+=(nums[i]+div-1)/div;
           // sum+=ceil((double)nums[i]/div);
           if(sum>threshold)break;
        }
        return sum;
    }
};