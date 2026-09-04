class Solution {
public:
    int firstStableIndex(vector<int>& nums, int k) {
        int n = nums.size();
        vector<int> sMini(n);
        sMini[n-1]=nums[n-1];
        for(int i=n-2;i>=0;i--){
            sMini[i]=min(nums[i],sMini[i+1]);
        }

        int maxi = INT_MIN;
        for (int i = 0; i < n; i++) {
            maxi = max(maxi, nums[i]);
            
            if ((maxi - sMini[i]) <= k) {
                return i;
            }
        }
        return -1;
    }
};