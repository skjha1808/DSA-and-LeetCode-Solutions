class Solution {
public:
    vector<int> findErrorNums(vector<int>& nums) {
        int n = nums.size();
        map<int, int> mp;
        for (auto it : nums) {
            mp[it]++;
        }

        int duplicate = -1, missing = -1;
        for (int i = 1; i <= n; i++) {
            if (mp[i] == 2) {
                duplicate = i;
            } else if (mp[i] == 0) {
                missing = i;
            }
        }

        return {duplicate, missing};
    }
};