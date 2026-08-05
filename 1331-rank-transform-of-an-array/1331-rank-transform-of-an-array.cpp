class Solution {
public:
    vector<int> arrayRankTransform(vector<int>& arr) {
        int n = arr.size();
        if (n == 0)
            return {};

        vector<int> nums = arr;
        sort(nums.begin(), nums.end());
        unordered_map<int, int> mp;
        int rank = 1;
        for (int i = 0; i < nums.size(); i++) {
            if (i == 0 || nums[i] != nums[i - 1]) {
                mp[nums[i]] = rank;
                rank++;
            }
        }

        vector<int> ans;
        for (int i = 0; i < n; i++) {
            ans.push_back(mp[arr[i]]);
        }

        return ans;
    }
};