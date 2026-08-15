class Solution {
public:
    int longestSubsequence(vector<int>& nums) {
        int n = nums.size();
        int totalxor = 0;
        bool hasNonZero = false;
        for (int i = 0; i < n; i++) {
            totalxor ^= nums[i];

            if (nums[i] != 0) {
                hasNonZero = true;
            }
        }

        if (totalxor != 0) {
            return n;
        }
        if (hasNonZero) {
            return n - 1;
        }

        return 0;
    }
};