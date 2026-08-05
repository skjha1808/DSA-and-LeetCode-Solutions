class Solution {
public:
    int findGCD(vector<int>& nums) {
        int n = nums.size();
        sort(nums.begin(), nums.end());
        int smallest = nums[0];
        int largest = nums[n - 1];

        int maxi = 0, ans = 0;
        for (int i = 1; i <= largest; i++) {
            if (smallest % i == 0 && largest % i == 0) {
                ans = i;
            }
            maxi = max(maxi, ans);
        }

        return maxi;
    }
};