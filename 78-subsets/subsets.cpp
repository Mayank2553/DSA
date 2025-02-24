class Solution {
public:
    vector<vector<int>> subsets(vector<int>& nums) {
        vector<vector<int>> result = {{}};
        for(int num: nums){
            int n = result.size();
            for(int i=0; i<n; i++){
                vector<int> subset = result[i]; // Take existing subset
                subset.push_back(num);         // Add new element
                result.push_back(subset);
            }
        }
        return result;
    }
};