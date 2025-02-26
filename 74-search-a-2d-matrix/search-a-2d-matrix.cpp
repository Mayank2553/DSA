class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int n = matrix.size();
        int m = matrix[0].size();

        // Apply binary search:
        int low = 0, high = n * m - 1;
        while (low <= high) {
            int mid = (low + high) / 2;
            int row = mid / m, col = mid % m;
            
            if (matrix[row][col] == target) return true; // Found the target
            else if (matrix[row][col] < target) low = mid + 1; // Search right half
            else high = mid - 1; // Search left half
        }
        return false;
    }
};