class Solution {
public:
    vector<int> spiralOrder(vector<vector<int>>& matrix) {

        int sRow = 0, eRow = matrix.size()-1, sColumn = 0, eColumn = matrix[0].size()-1;
        vector<int> ans;

        while(sRow <= eRow && sColumn <= eColumn)
        {
            int i, j;
            j = sColumn;
            while(j <= eColumn)
            {
                ans.push_back(matrix[sRow][j]);
                ++j;
            }
            i = sRow+1;
            while(i <= eRow)
            {
                ans.push_back(matrix[i][eColumn]);
                ++i;
            }
            j = eColumn-1;
            while(j >= sColumn && sRow != eRow)
            {
                ans.push_back(matrix[eRow][j]);
                --j;
            }
            i = eRow-1;
            while(i > sRow && sColumn != eColumn)
            {
                ans.push_back(matrix[i][sColumn]);
                --i;
            }
            sRow++;
            eRow--;
            sColumn++;
            eColumn--;

        }

        return ans;

    }

};