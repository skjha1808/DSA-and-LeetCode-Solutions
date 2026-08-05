class Solution {
public:
    int findGCD(vector<int>& nums) {
        int n = nums.size();
        int mn=INT_MAX, mx=INT_MIN;
        for(int i=0;i<n;i++){
            mn = min(mn,nums[i]);
            mx = max(mx,nums[i]);
        }

        int maxi = 0, ans = 0;
        for (int i = 1; i <= mx; i++) {
            if (mn % i == 0 && mx % i == 0) {
                ans = i;
            }
            maxi = max(maxi, ans);
        }

        return maxi;
    }
};