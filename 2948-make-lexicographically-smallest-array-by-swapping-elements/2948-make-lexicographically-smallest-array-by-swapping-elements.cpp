class Solution {
public:
    vector<int> lexicographicallySmallestArray(vector<int>& nums, int limit) {
        int n = nums.size();
        vector<pair<int, int>> v;
        for (int i = 0; i < n; i++) {
            v.push_back({nums[i], i});
        }
        sort(v.begin(), v.end());

        vector<int> ans = nums;
        int start = 0;
        for (int i = 1; i <= n; i++) {
            if (i == n || v[i].first - v[i - 1].first > limit) {
                vector<int> values;
                vector<int> indices;

                for (int j = start; j < i; j++) {
                    values.push_back(v[j].first);
                    indices.push_back(v[j].second);
                }
                sort(indices.begin(), indices.end());

                for (int j = 0; j < values.size(); j++) {
                    ans[indices[j]] = values[j];
                }

                start = i;
            }
        }

        return ans;
    }
};