class Solution {
public:
    int maxSubarrayLength(vector<int>& nums, int k) {
        int n = nums.size();
        unordered_map<int, int> mp;

        int maxi = 0, i = 0;
        for (int j = 0; j < n; j++) {
            mp[nums[j]]++;
            
            while (mp[nums[j]] > k) {
                mp[nums[i]]--;
                i++;
            }
            maxi = max(maxi, j - i + 1);
        }

        return maxi;
    }
};