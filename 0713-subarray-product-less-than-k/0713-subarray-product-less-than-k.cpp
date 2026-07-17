class Solution {
public:
    int numSubarrayProductLessThanK(vector<int>& nums, int k) {
        if(k <= 0) return 0;
        int n = nums.size();
        int pro = 1, cnt = 0;
        
        int left = 0, right = 0;
        while(right < n){
            pro *= nums[right];

            while(pro >= k){
                pro /= nums[left];
                left++;
            }
            if(pro < k) cnt += right - left + 1;
            right++;
        }
        return cnt;
    }
};