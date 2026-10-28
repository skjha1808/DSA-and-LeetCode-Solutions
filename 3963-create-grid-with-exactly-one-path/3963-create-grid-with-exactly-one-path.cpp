class Solution {
public:
    vector<string> createGrid(int m, int n) {
        vector<string> grid(m, string(n, '#'));

        // Make the first column free
        for (int i = 0; i < m; i++) {
            grid[i][0] = '.';
        }

        // Make the last row free
        grid[m-1] = string(n, '.');

        return grid;
    }
};