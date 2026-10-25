class Solution {
public:
    long long countSubarrays(vector<int>& nums, int minK, int maxK) {
        long long count = 0, len = 0;
        for (int i = 0; i < nums.size(); i++) {
            if (nums[i] >= minK && nums[i] <= maxK) {
                len++;
                count += len;
            } 
            else len = 0;
        }

        return count;
    }
};