class Solution {
public:
    int equalPairs(vector<vector<int>>& grid) {
        int n = grid.size();
        int count = 0;

        map<vector<int>, int> mp;
        for (int i = 0; i < n; i++) {
            mp[grid[i]]++;
        }

        for (int j = 0; j < n; j++) {
            vector<int> col;
            for (int i = 0; i < n; i++) {
                col.push_back(grid[i][j]);
            }

            if (mp.count(col)) {
                count += mp[col];
            }
        }

        return count;
    }
};