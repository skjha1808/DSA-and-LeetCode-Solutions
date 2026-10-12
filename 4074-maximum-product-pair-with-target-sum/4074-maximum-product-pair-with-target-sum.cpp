class Solution {
public:
    vector<int> maxProductPair(vector<int>& nums, int target) {
        int n = nums.size();
        int maxi = INT_MIN, idx1 = -1, idx2 = -1;
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < n; j++) {
                int sum = nums[i] + nums[j];
                if (sum == target && nums[i] > nums[j]) {
                    int product = nums[i] * nums[j];
                    if (product > maxi) {
                        maxi = product;
                        idx1 = i;
                        idx2 = j;
                    }
                }
            }
        }
        return {idx1, idx2};
    }
};