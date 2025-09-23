// https://leetcode.com/problems/search-a-2d-matrix-ii/description/
class Solution {
public:
    bool binarySearch(vector<vector<int>>& matrix, int row, int col,
                      int target) {
        int r = 0, c = col - 1;

        while (r < row && c >= 0) {
            int current = matrix[r][c];
            if (current == target) {
                return true;
            } else if (current > target) {
                c -= 1;
            } else {
                r += 1;
            }
        }
        return false;
    }

    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        if (matrix.empty() || matrix[0].empty())
            return false;

        int m = matrix.size();
        int n = matrix[0].size();

        bool res = binarySearch(matrix, m, n, target);
        return res;
    }
};
