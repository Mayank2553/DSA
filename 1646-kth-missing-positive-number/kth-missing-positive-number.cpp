class Solution {
public:
    int findKthPositive(vector<int>& arr, int k) {
        for (int i = 0; i < arr.size(); i++) {  // Brute Force Approach
            if (arr[i] <= k) 
                k++; // Shifting k
            else 
                break;
        }
        return k;
    }
};