class Solution {
    void solve(int i, vector<int>& temp, vector<vector<int>>& arr) {
        int n = temp.size();
        if (i == n) {
            arr.push_back(temp);
            return;
        }
        set<int> st;
        for (int j = i; j < n; j++) {
            if (st.find(temp[j]) != st.end())
                continue;
            st.insert(temp[j]);
            swap(temp[i], temp[j]);
            solve(i + 1, temp, arr);
            swap(temp[i], temp[j]);
        }
    }

public:
    vector<vector<int>> permuteUnique(vector<int>& nums) {
        vector<vector<int>> ans;
        solve(0, nums, ans);

        return ans;
    }
};