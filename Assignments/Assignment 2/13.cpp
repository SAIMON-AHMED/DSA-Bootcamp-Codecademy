// https://leetcode.com/problems/spiral-matrix/
// Traverse the boundary of the matrix
class Solution {
public:
    vector<int> spiralOrder(vector<vector<int>>& matrix) {
        int sRow = 0, eRow = matrix.size() - 1, sCol = 0, eCol = matrix[0].size() - 1;
        vector<int> ans;
        while (sRow <= eRow && sCol <= eCol) {
            int i, j;
            j = sCol;
            // horizontal boundary
            while (j <= eCol) {
                ans.push_back(matrix[sRow][j]);
                j++;
            }
            // vertical boundary
            i = sRow + 1;
            while (i <= eRow) {
                ans.push_back(matrix[i][eCol]);
                i++;
            }
            // horizontal boundary
            j = eCol - 1;
            while(j >= sCol && sRow != eRow) {
                ans.push_back(matrix[eRow][j]);
                j--;
            }
            // vertical boundary
            i = eRow - 1;
            while (i > sRow && sCol != eCol) {
                ans.push_back(matrix[i][sCol]);
                i--;
            }
            sRow++;
            eRow--;
            sCol++;
            eCol--;
        }
        return ans;
    }
};