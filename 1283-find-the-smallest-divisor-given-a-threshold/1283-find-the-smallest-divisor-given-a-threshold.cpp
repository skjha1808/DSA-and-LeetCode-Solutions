class Solution {
    int solve(vector<int>& nums, int div) {
        int sum = 0;
        for (int i = 0; i < nums.size(); i++) {
            sum += (nums[i] + div - 1) / div;
        }
        return sum;
    }

public:
    int smallestDivisor(vector<int>& nums, int threshold) {
        int maxi = *max_element(nums.begin(), nums.end());
        int low = 1, high = maxi;
        while (low <= high) {
            int mid = low + (high - low) / 2;
            
            if (solve(nums, mid) <= threshold) {
                high = mid - 1;
            } 
            else
                low = mid + 1;
        }
        return low;
    }
};