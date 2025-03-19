class Solution {
public:
    vector<int> sortArray(vector<int>& nums) {
        multiset<int> st(nums.begin(), nums.end());
        vector<int> sA(st.begin(), st.end());
        return sA;
    }
};