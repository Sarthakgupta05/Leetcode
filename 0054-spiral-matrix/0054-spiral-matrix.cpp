class Solution {
public:
    vector<int> spiralOrder(vector<vector<int>>& matrix) {
        vector<int> ans;
        int row = matrix.size();
        int column = matrix[0].size();

        int rst = 0, cst = 0;

        while (rst < row && cst < column) {
            // 1. Left to right
            for (int i = cst; i < column; i++)
                ans.push_back(matrix[rst][i]);
            rst++;

            // 2. Top to bottom
            for (int i = rst; i < row; i++)
                ans.push_back(matrix[i][column - 1]);
            column--;

            // Check if elements remain
            if (rst >= row || cst >= column) break;

            // 3. Right to left
            for (int i = column - 1; i >= cst; i--)
                ans.push_back(matrix[row - 1][i]);
            row--;

            // 4. Bottom to top
            for (int i = row - 1; i >= rst; i--)
                ans.push_back(matrix[i][cst]);
            cst++;
        }

        return ans;
    }
};