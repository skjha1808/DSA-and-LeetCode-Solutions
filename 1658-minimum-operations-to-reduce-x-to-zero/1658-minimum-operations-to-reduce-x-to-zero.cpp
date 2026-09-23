class Solution {
public:
    int minOperations(vector<int>& nums, int x) {
        long long n = nums.size();
        long long totalSum = 0;
        for (int i = 0; i < n; i++) {
            totalSum += nums[i];
        }

        if (x > totalSum)
            return -1;
        if (x == totalSum)
            return n;

        long long targetSum = totalSum - x;
        int left = 0, right = 0, maxi = -1;
        long long currSum = 0;
        while (right < n) {
            currSum += nums[right];

            if (currSum > targetSum) {
                while (currSum > targetSum) {
                    currSum -= nums[left];
                    left++;
                }
            }

            if (currSum == targetSum) {
                maxi = max(maxi, right - left + 1);
            }
            right++;
        }

        if(maxi == -1) return -1;

        return n - maxi;
    }
};