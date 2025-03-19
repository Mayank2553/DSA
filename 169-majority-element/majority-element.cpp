class Solution {
public:
    int majorityElement(vector<int>& nums) {
        unordered_map<int, int> mp;
        for(auto i: nums){
            mp[i]++;
        }
        int n = nums.size()/2;
        int target;
        for(auto i: mp){
            if(i.second > n){
                target = i.first;
                break;
            }
        }
        return target;
    }
};