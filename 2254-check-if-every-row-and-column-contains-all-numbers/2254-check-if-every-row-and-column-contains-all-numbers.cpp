class Solution {
public:
    bool checkValid(vector<vector<int>>& matrix) {
        int n = matrix.size();

        for (int i = 0; i < n; ++i) {
            vector<int> rowCount(n + 1, 0);
            vector<int> colCount(n + 1, 0);
            for (int j = 0; j < n; ++j) {
                int rowVal = matrix[i][j];
                int colVal = matrix[j][i];
                if (rowVal < 1 || rowVal > n || ++rowCount[rowVal] > 1) return false;
                if (colVal < 1 || colVal > n || ++colCount[colVal] > 1) return false;
            }
        }

        return true;
    }
};
