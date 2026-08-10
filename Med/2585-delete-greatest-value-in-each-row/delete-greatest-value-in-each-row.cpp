class Solution {
public:
    int deleteGreatestValue(vector<vector<int>>& grid) {
    int m = grid.size();
    int n = grid[0].size();
        for (int i = 0; i < m; ++i) {
            sort(grid[i].begin(), grid[i].end());
        }
        int result = 0;
        for (int c = n - 1; c >= 0; --c) {
            int maxInColumn = 0;
            for (int r = 0; r < m; ++r) {
                maxInColumn = max(maxInColumn, grid[r][c]);
            }
            result += maxInColumn;
        }

        return result;
    }
};